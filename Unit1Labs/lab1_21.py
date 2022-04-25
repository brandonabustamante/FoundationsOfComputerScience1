import math
# Brandon Aaron Bustamante, yxx5@txstate.edu
# No collaborators
# Lab 1.21 Quadratic equation discriminant

""""
 * Given a quadratic equation: ax^2+bx+c=0 the discriminant is computed using
 * this formula: b^2 - 4ac.
 * Write a program that inputs integer values for a, b, and c, and then computes
 * the discriminant.
 * Ex: If the input is:
 * 2 5 6
 * the output is:
 * -23
 * because 5x5 - 4x2x6 = 25 - 48 = -23
"""
# Do not exceed last *
#********************************************************************************#

# Will only make comments on unclear code.
if __name__ == "__main__":
    
    user_in = input()
    a = int(user_in)
    user_in = input()
    b = int(user_in)
    user_in = input()
    c = int(user_in)

    # Using built-in power function.
    discriminant = int((math.pow(b,2) - (4 * (a * c))))
    print(discriminant)

    quit()

