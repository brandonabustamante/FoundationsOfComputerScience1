# Brandon A Bustamante yxx5@txstate.edu
# No collaborators
# LAB 2.20 Grade distribution

"""
 * Write a program that calculates the percentage of students receiving each letter
 * grade in a given class (A, B, C, D, or F). The program should input the number of
 * students receiving each letter grade and then display the percentage of students
 * for each letter.
 *
 * Store the number of students receiving each letter grade in an integer variable.
 *
 * Ex: If the input is:
 * 7 11 4 5 6
 * the output is:
 * 
 * A grades: 21.2
 * B grades: 33.3
 * C grades: 12.1
 * D grades: 15.2
 * F grades: 18.2
 * 
 * Use int for the data type of the input values.
 * The output should display fractional amounts to one decimal place.
"""

# Do not exceed last *
#********************************************************************************#

if __name__ == "__main__":
    MULTIPLIER = 100

    user_in = input()
    a_students = int(user_in)
    user_in = input()
    b_students = int(user_in)
    user_in = input()
    c_students = int(user_in)
    user_in = input()
    d_students = int(user_in)
    user_in = input()
    f_students = int(user_in)

    total_students = a_students + b_students + c_students + d_students + f_students 

    percentage = float(a_students) / total_students
    print("A grades: %.1f" %(percentage * MULTIPLIER))

    percentage = float(b_students) / total_students
    print("B grades: %.1f" %(percentage * MULTIPLIER))

    percentage = float(c_students) / total_students
    print("C grades: %.1f" %(percentage * MULTIPLIER))

    percentage = float(d_students) / total_students
    print("D grades: %.1f" %(percentage * MULTIPLIER))

    percentage = float(f_students) / total_students
    print("F grades: %.1f" %(percentage * MULTIPLIER))

    quit() 