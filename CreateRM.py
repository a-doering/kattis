import os
import requests

class CreateRM():

    # Initializes the class
    def __init__(self, profile_url):
        pass

    def find_solutions(dirs, verbose=False):
        '''Find all solution files in local directories, returns list of full paths'''

        solutions = []

        for dir in dirs:
            file_names = os.listdir(dir)

            for file_name in file_names:
                full_path = os.path.join(dir, file_name)
                solutions.append(full_path)

                if verbose:
                    print('file path: ', full_path)

        return solutions
    
    def create_dict(solutions):
        '''Create dictionary with the data of the solutions'''
        my_dict = {}
        for path in solutions:

            name = os.path.splitext(os.path.basename(path))[0]
            language = os.path.basename(os.path.dirname(path))

            if name in my_dict:
                my_dict[name]['languages'].append(language)
            else:
                my_dict[name] = {'languages': [language]}

        return my_dict

    def problem_exists(url):
        '''Check if name of problem exists on kattis'''
        return requests.get(url).status_code == 200


    # Check difficulty of problem
    def check_difficulty():
        pass
    
    # Create statistics
    def stats():
        pass
    
    # Create profile statistics
    def profile_stats(profile_url):
        pass
        
    # Create the readme in markdown
    def create():
        pass


if __name__ == "__main__":
    cwd = os.getcwd()
    dirs = ['C++', 'Python']
    dirs[:] = [os.path.join(cwd, dir) for dir in dirs]
    solutions = CreateRM.find_solutions(dirs, verbose=False)
    my_dict = CreateRM.create_dict(solutions)
    for i in my_dict:
        print(my_dict[i]['languages'])


    print(CreateRM.problem_exists("https://open.kattis.com/"))