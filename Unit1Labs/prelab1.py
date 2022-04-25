# Brandon A Bustamante
# 02/10/22
# Pre-Lab 1 Assignment 

""""
 * Did not replicate the error fixes when converting the code.
 * Write code that takes the number of pounds the user
 * can lift (use cin), divides that number by 2.20462, and then
 * prints it to the screen. This will convert pounds to kg.
 * (200 pounds is equal to 90.7186 kilograms)
"""

# Do not exceed last *
#********************************************************************************#

if __name__ == "__main__":
    
    DIVISOR = 2.20462
    user_in = input()
    weight_lbs = int(user_in)

    lbs_to_kilo = weight_lbs / DIVISOR

    print(weight_lbs, " pounds is equal to ", lbs_to_kilo, " kilograms")

    quit()
