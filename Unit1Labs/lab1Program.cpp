// Brandon A Bustamatne 
// 02/11/22
// CS1428 Lab
// Lab 1
// Description: this program will calculate number of circles in a rectangular color paper

#include <iostream>
using namespace std;

int main() {

    int width;
    // TODO: Declare the rest of the variables
    int height;
    const double PI = 3.142;
    double cirRadius;
    int areaOfRectangle;
    int areaOfCircle;
    double numOfCircles;
    double remainder;
    // Prompt the user for width of a rectangle and store it:
    cout << "Enter the width of a rectangle:" << endl;
    cin >> width;

    // TODO: Prompt for and store the rectangles's height and circle's radius:
    cout << "Please enter the height of the recangle: ";
    cin >> height;
    cout << "Please enter the radius of the circle: ";
    cin >> cirRadius;
    // TODO: Calculate number of circles and the left over paper and assign them to the appropriate variables:
    areaOfRectangle = (width * height);
    areaOfCircle = PI * (cirRadius * cirRadius);
    numOfCircles = areaOfRectangle / areaOfCircle;
    remainder = areaOfRectangle % areaOfCircle;
    // TODO: Display the result to the console:
    cout << "Area of rectangle : " << areaOfRectangle << endl;
    cout << "Area of circle : " << areaOfCircle << endl;
    cout << "Number of circles " << numOfCircles << endl;
    cout << "Remainder of paper " << remainder << endl;
    // Exit the program:
    return 0;
}
