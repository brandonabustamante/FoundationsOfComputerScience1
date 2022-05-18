# Brandon A Bustamante yxx5@txstate.edu
# No collaborators
# LAB 2.21 Convert from seconds

"""
 * People find it easier to read time in hours, minutes, and seconds rather than
 * just seconds.
 * Write a program that reads in seconds as input, and outputs the time in hours,
 * minutes, and seconds.
 * Ex: If the input is:
 * 4000
 * the output is:
 * Hours: 1
 * Minutes: 6
 * Seconds: 40
 *
 * Use named constants (also known as constant variables) for any conversion
 * constants you use in your program 
 * (for example, the number of seconds in an hour)
 * Use both / and % operators in your program (and do not use loops).
"""

# Do not exceed last * 
#********************************************************************************#

if __name__ == "__main__":
    DIVISOR = 60

    user_in = input()
    seconds = int(user_in)

    hours = seconds / DIVISOR / DIVISOR;
    minutes = (seconds / DIVISOR) % DIVISOR;
    seconds = seconds % DIVISOR;

    print("Hours: %d" %hours)
    print("Minutes: %d" %minutes)
    print("Seconds: %d" %seconds)

    quit()