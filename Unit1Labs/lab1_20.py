import math
# Brandon Aaron Bustamante, yxx5@txstate.edu
# No collaborators
# Lab 1.20 Basic output with variables

""""
 * A variable like userNum can store a value like an integer. Extend the given
 * program as indicated. Output the user's input. (2 pts) 
 * Output the input squared and cubed. 
 * Hint: Compute squared as userNum * userNum. (2 pts)
 * Get a second user input into userNum2, and output the sum and product. (6 pts)
 * Note: This zyLab outputs a newline after each user-input prompt. For convenience
 * in the examples below, the user's input value is shown on the next line, but
 * such values don't actually appear as output when the program runs.
 * Output Example
 * 
 * Enter integer:
 * 4
 * You entered: 4
 * 4 squared is 16 
 * And 4 cubed is 64!!
 * Enter another integer:
 * 5
 * 4 + 5 is 9
 * 4 * 5 is 20
"""
# Do not exceed last *
#********************************************************************************#

# Will only make comments on unclear code.

if __name__ == "__main__":
    user_in = input("Enter integer: ")
    user_num = int(user_in)

    print("You entered: ", user_num)
    squared = math.pow(user_num,2)
    print(user_num, " squared is ", int(squared))
    cubed = math.pow(user_num,3)
    print("And ", user_num,  " cubed is ", int(cubed), "!!")

    user_in = input("Enter another integer ")
    second_num = int(user_in)

    print(user_num, " + ", second_num," is ", (user_num + second_num))
    print(user_num, " * ", second_num, " is ", (user_num * second_num))

    quit()