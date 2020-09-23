'''Functions to create a readme with information about solved kattis problems.'''
import os
import requests
from bs4 import BeautifulSoup

def find_solutions(dirs, verbose=False):
    '''Find all solution files in local directories, return list of full path strings'''
    solution_paths = []

    for dir in dirs:
        file_names = os.listdir(dir)

        for file_name in file_names:
            full_path = os.path.join(dir, file_name)
            solution_paths.append(full_path)

            if verbose:
                print('file path: ', full_path)

    return solution_paths

def create_dict(dirs=['C++', 'Python'], verbose=False):
    '''Create dictionary with the data of the solutions'''

    cwd = os.getcwd()
    dirs[:] = [os.path.join(cwd, dir) for dir in dirs]

    # Add local solutions
    solutions = find_solutions(dirs, verbose)
    my_dict = {}
    for path in solutions:

        problem_id, language_suffix = os.path.splitext(os.path.basename(path))
        language = os.path.basename(os.path.dirname(path))

        if problem_id in my_dict:
            my_dict[problem_id]['languages'][language] = language_suffix 
        else:
            my_dict[problem_id] = {'languages': {language:language_suffix}}

    # Fill in remote information
    url_base = 'https://open.kattis.com/problems/'
    for problem_id in my_dict:

        my_dict[problem_id]['exists'] = url_exists(url_base + problem_id)

        if my_dict[problem_id]['exists'] == True:
            my_dict[problem_id]['problem_name'], my_dict[problem_id]['problem_difficulty'] = get_problem_info(problem_id)

        if verbose:
            print(problem_id)
            print(my_dict[problem_id])   

    return my_dict

def url_exists(url):
    '''Check if urlexists on kattis'''
    return requests.get(url).status_code == 200

# Check difficulty of problem
def get_problem_info(problem_id):
    '''Get full name and difficulty of problem from kattis'''
    url_problem = 'https://open.kattis.com/problems/' + problem_id
    response = requests.get(url_problem)
    soup = BeautifulSoup(response.content, "html.parser")

    side_contents = soup.find(class_="sidebar-info").find_all(text=True)
    problem_id_side = side_contents[3].strip()

    if problem_id_side != problem_id:
        raise Exception("Sidebar name is not matching. Check name or indexing.")
        return 'Error_sidebar', 0
    problem_difficulty = float(side_contents[9])
    headline = soup.find(class_="headline-wrapper")
    problem_name = headline.find_all(text=True)[0]

    return problem_name, problem_difficulty

# Create statistics from the locally saved solutions
def create_local_stats():
    '''Create statistics of the problems solved'''
    pass

# Get online profile statistics
def get_profile_stats(username):
    '''Get the profile statistics (rank and score)'''
    url_profile = 'https://open.kattis.com/users/' + username

    exists = url_exists(url_profile)
    if exists:
        # Get the data using BeautifulSoup
        response = requests.get(url_profile)
        soup = BeautifulSoup(response.content, "html.parser")
        # Grab the first table
        table = soup.find_all('table')[0]
        txt = table.contents[3].find_all(text=True)
        rank = int(txt[0].strip())
        score = float(txt[2].strip())
        return rank, score
    else:
        return 0, 0

# Create the readme in markdown
def create_readme(username=None, verbose=False):
    '''Create the readme file with all the information'''

    # Write to readme
    with open('readme.md', 'w') as f:

        # Description text
        text_description = 'This repo contains my solutions to Kattis problems. [Kattis](https://open.kattis.com/) is a website that offers many different programming problems.'
        url_profile_base = 'https://open.kattis.com/users/'
        user_rank, user_score = get_profile_stats('stevenhalim')
        text_description = text_description + ' I first started solving some Kattis problems when my professor [Steven Halim]({}) (Rank {} with a score of {}) introduced it in his class CS2040C: Data Structures and Algorithms. These solutions were not created following good software engineering practices. They just had to be fast to implement and fast enough to solve the problem within the given time.'.format(url_profile_base + 'stevenhalim', user_rank, user_score)

        f.write('# Kattis Problem Solutions' + '\n')
        f.write(text_description + '\n\n')

        f.write('## Display of solutions' + '\n')
        f.write('To get a better overview of my solved problems and try some basic web scraping I created [this script](https://github.com/a-doering/kattis/blob/master/CreateRM.py). It gathers information on my local solutions, uses requests and Beautiful Soup to scrape information from Kattis and generates this readme.md file. ' + '\n\n')

        # User statistics online
        if username is not None:
            user_rank, user_score = get_profile_stats(username)
            f.write('## User statistics' + '\n')
            f.write('Username|Rank|Score (online)' + '\n')
            f.write('---|---|---' + '\n')
            f.write('[' + username + '](' + url_profile_base + username +')|' + str(user_rank) + '|' + str(user_score) + '\n\n')

        # Create dictionary with data about the problems solved and stored locally
        my_dict = create_dict(verbose=verbose)

        # User statistics local
        score_local = 0
        tracked_problems_local = 0

        # Flag whether section about unrecognised problems is needed
        unrecognised_problems = False

        for p_id in my_dict:
            if my_dict[p_id]['exists']:
                score_local += my_dict[p_id]['problem_difficulty']
                tracked_problems_local += 1
            else:
                unrecognised_problems = True

        if tracked_problems_local > 0:
            f.write('## Local statistics' + '\n')
            f.write('\# Tracked problems|Average difficulty|Score (local)|Score (online-local)' + '\n')
            f.write('---|---|---|---' + '\n')
            f.write(str(tracked_problems_local) + '|' + str(round(score_local/tracked_problems_local, 2)) + '|' + str(round(score_local,2)) + '|' + str(user_score-score_local) + '\n\n')            

            # Problems solved
            f.write('## Problems solved' + '\n')
            f.write('Problem|Languages|Difficulty' + '\n')
            f.write('---|---|---' + '\n')

            url_kattis_base = 'https://open.kattis.com/problems/'
            url_github_base = 'https://github.com/a-doering/kattis/tree/master/'

            #for p_id in sorted(my_dict):# Sorted alphabetically by ID
            # Sorted by problem difficulty
            for p_id in sorted(my_dict, key=lambda k: my_dict[k]['problem_difficulty']):
                if my_dict[p_id]['exists']:
                    languages_string = ''
                    for count, lang in enumerate(my_dict[p_id]['languages'], 0):
                        if count != 0:
                            languages_string = languages_string + ', '
                        languages_string = languages_string + '[' + lang + '](' + url_github_base + lang + '/' + p_id  + my_dict[p_id]['languages'][lang] +')'
                    f.write('[' + my_dict[p_id]['problem_name'] + '](' + url_kattis_base + p_id +')|' + languages_string + '|' + str(my_dict[p_id]['problem_difficulty'])+ '\n')
            f.write('\n')

        if unrecognised_problems:
        # Unrecognised problems
            f.write('## Problems not recognised by name' + '\n')
            f.write('Problem|Languages' + '\n')
            f.write('---|---' + '\n')
            for p_id in my_dict:
                if not my_dict[p_id]['exists']:
                    languages_string=''
                    for count, lang in enumerate(my_dict[p_id]['languages'], 0):
                        if count != 0:
                            languages_string = languages_string + ', '
                        languages_string = languages_string + lang
                    f.write(p_id + '|' + languages_string + '\n')

if __name__ == "__main__":
    create_readme(username= 'a-doering', verbose=True)