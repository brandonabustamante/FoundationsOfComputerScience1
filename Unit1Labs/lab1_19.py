# Brandon Aaron Bustamante, yxx5@txstate.edu
# No collaborators
# Lab 1.19 Convert to seconds

"""
 * Write a program that reads in hours, minutes and seconds as input,
 * and outputs the time in seconds only.
 * Ex: If the input is:
 * 1 6 40
 * where 1 is the number of hours, 6 is the number of minutes, and 40
 * is the number of seconds, the output is:
 * Seconds: 4000
"""
# Do not exceed last *
#********************************************************************************#

if __name__ == "__main__":
    
    # Declaring required variables
    MULTIPLIER = 60
    
    # Declaring more variables and taking user input,
    # typecasting as an integer because the input()
    # method will return a string.
    user_in = input()
    hours = int(user_in)
    user_in = input()
    mins = int(user_in)
    user_in = input()
    seconds = int(user_in)
    
    # Computing calculations.
    hours_to_sec = hours * MULTIPLIER * MULTIPLIER
    mins_to_sec = mins * MULTIPLIER
    total_sec = hours_to_sec + mins_to_sec + seconds
    
    # Outputting the final answer to the terminal console. 
    print("Seconds: ", total_sec)

    # Terminating the program.
    quit()