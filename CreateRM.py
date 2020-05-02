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
    solutions = find_solutions(dirs, verbose)[:10]#TODO
    my_dict = {}
    for path in solutions:

        problem_id = os.path.splitext(os.path.basename(path))[0]
        language = os.path.basename(os.path.dirname(path))

        if problem_id in my_dict:
            my_dict[problem_id]['languages'].append(language)
        else:
            my_dict[problem_id] = {'languages': [language]}

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
    ''''''
    url_problem = 'https://open.kattis.com/problems/' + problem_id
    response = requests.get(url_problem)

    soup = BeautifulSoup(response.content, "html.parser")

    # Can break here if the name is wrong, but will be checked in advance

    side_contents = soup.find(class_="sidebar-info").find_all(text=True)
    problem_id_side = side_contents[3].strip()
    '''
    print(problem_id)# + '#')
    print(problem_id_side)# + '#')
    '''
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
        text_description = 'This repo contains my solutions to kattis problems. [Kattis](https://open.kattis.com/) is a website that offers many different programming problems.'
        f.write('# Overview' + '\n')
        f.write(text_description +'\n')
        
        # User statistics
        if username is not None:
            user_rank, user_score = get_profile_stats(username)
            f.write('# User statistics (online)' + '\n')
            f.write('Username|Rank|Score' + '\n')
            f.write('---|---|---' + '\n')
            url_profile = 'https://open.kattis.com/users/' + username
            f.write('[' + username + '](' + url_profile +')|' + str(user_rank) + '|' + str(user_score) + '\n')

        # Create dictionary with data about the problems solved and stored locally
        my_dict = create_dict(verbose=verbose)

        # Problems solved
        f.write('# Problems solved' + '\n')
        f.write('Problem|Languages|Difficulty' + '\n')
        f.write('---|---|---' + '\n')

        url_base = 'https://open.kattis.com/problems/'

        for p_id in my_dict:
            if my_dict[p_id]['exists']:
                languages_string = ''
                for count, lang in enumerate(my_dict[p_id]['languages'], 0):
                    if count != 0:
                        languages_string = languages_string + ', '
                    languages_string = languages_string + '[' + lang + '][' + lang + '/' + p_id + ']' # TODO Get ending of the file and add it to be able to link
                f.write('[' + my_dict[p_id]['problem_name'] + '](' + url_base + p_id +')|' + languages_string + '|' + str(my_dict[p_id]['problem_difficulty'])+ '\n')

        #         if my_dict[problem_id]['exists'] == True:   

        # Unrecognised problems
    pass

if __name__ == "__main__":
    create_readme(username= 'a-doering', verbose=True)
