// Brandon A Bustamante 
// 02/10/2022
// CS1428 Lab
// Lab 1
// Description: this program will calculate number of circles in a rectangular
// color paper

/*
 * Sample Input/Output:
 * Enter the width of a rectangle: 50
 * Enter the height of the rectangle: 10
 * Enter the radius of a circle: 3
 * Number of circles that can be cut from the rectangle: 17
 * Area of the left over color paper: 19.274
*/

// Do not exceed last *
/********************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int width;
    // TODO: Declare the rest of the variables
    int height, radius, numOfCircles;
    double areaOfRectangle, areaOfCircle, remainPaper;
    const double PI = 3.142;

    // Prompt the user for width of a rectangle and store it:
    cout << "Enter the width of a rectangle: ";
    cin >> width;

    // TODO: Prompt for and store the rectangles's height and circle's radius:
    cout << "Enter the rectangles height: ";
    cin >> height;
    cout << "Enter the height of the cirle's radius: ";
    cin >> radius;

    // TODO: Calculate number of circles and the left over paper and assign
    // them to the appropriate variables:
    areaOfRectangle = width * height;
    areaOfCircle = PI * (pow(radius,2));
    numOfCircles = areaOfRectangle / areaOfCircle;
    remainPaper = areaOfRectangle - (numOfCircles * areaOfCircle);

    // TODO: Display the result to the console:
    cout << "Number of circles that can be cut form rectangle: " << numOfCircles << endl;
    cout << "Area of left over color paper: " << remainPaper << endl;

    // Exit the program:
    return 0;
}