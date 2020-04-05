import os
import requests

class CreateRM():

    # Initializes the class
    def __init__(self, profile_url):
        pass

    def find_solutions(dirs, verbose=False):
        '''Find all solution files in local directories, returns list of paths'''
        solutions = []
        for dir in dirs:
            file_names = os.listdir(dir)
            for file_name in file_names:
                full_path = os.path.join(dir, file_name)
                solutions.append(full_path)

                if verbose:
                    print('file path: ', full_path)

        return solutions
        
    
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
    dirs = ['C++']
    dirs[:] = [os.path.join(cwd, dir) for dir in dirs]
    solutions = CreateRM.find_solutions(dirs, verbose=False)

    for i in solutions:
        print(i)

    print(CreateRM.problem_exists("https://open.kattis.com/"))

