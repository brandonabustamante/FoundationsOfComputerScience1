# Brandon A Bustamante 
# 02/10/2022
# CS1428 Lab
# Lab 1
# Description: this program will calculate number of circles in a rectangular
# color paper

""""
 * Sample Input/Output:
 * Enter the width of a rectangle: 50
 * Enter the height of the rectangle: 10
 * Enter the radius of a circle: 3
 * Number of circles that can be cut from the rectangle: 17
 * Area of the left over color paper: 19.274
"""

# Do not exceed last *
#********************************************************************************#

if __name__ == "__main__":
    # Declare the rest of the variables
    # Prompt the user for width of a rectangle and store it:
    PI = 3.142
    tmpIn = input("Enter the width of a rectangle: ")
    width = int(tmpIn)

    # Prompt for and store the rectangles's height and circle's radius:
    tmpIn = input("Enter the rectangle's height: ")
    height = int(tmpIn)
    tmpIn = input("Enter the radius of the circle: ")
    radius = int(tmpIn)
    print("Radius ", radius)

    # Calculate number of circles and the left over paper and assign
    # them to the appropriate variables:
    areaOfRectangle = width * height;
    areaOfCircle = PI * (radius ** 2)
    numOfCircles = int(areaOfRectangle / areaOfCircle);
    remainPaper = areaOfRectangle - (numOfCircles * areaOfCircle);

    # Display the result to the console:
    print("Number of circles that can be cut form rectangle: ", numOfCircles)
    print("Area of left over color paper: ", remainPaper)

    # Exit the program:
    quit()