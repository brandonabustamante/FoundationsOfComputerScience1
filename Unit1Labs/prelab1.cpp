// Brandon A Bustamante
// 02/10/22
// Pre-Lab 1 Assignment 

// Do not exceed last *
/********************************************************************************/

//Copy and Paste this code into your IDE and complete the requested items.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // 1.
    // There are a several errors with the below code
    // Fix the syntax and logical errors.

    // The Program should take two integers from the user and assign them to x
    // and y.
    // The program should then print d to the power of 2 and x + 36

    // added ; to end statements
    int d;
    int x;

    // Corrected d * d = d;
    d *= d;

    // removed the white space between the + =
    x  += 36;

    cout << "Enter the value for d" << endl;

    // flipped the direction of the arrow to >>
    cin >> d;

    cout << "Enter the value for x " << endl;
    // flipped the direction of the arrow to >>
    cin >> x ;

    // added logic to compute the power of d
    // included the math.h file required.
    cout << d <<" to the power of 2 = " << pow(d,2) << endl;

    // added logic to compute x + 36
    cout << x << "  +  36 = " << x + 36  << endl;

    // 2.
    // Write code that takes the number of pounds the user
    // can lift (use cin), divides that number by 2.20462, and then
    // prints it to the screen. This will convert pounds to kg.
    // (200 pounds is equal to 90.7186 kilograms)

    cout << "Many pounds can you lift?" << endl;
    // write your code here
    int weigthLbs;
    const double DIVISOR = 2.20462;
    double lbsToKilo;

    cin >> weigthLbs;

    lbsToKilo = weigthLbs / DIVISOR;

    cout << weigthLbs << " pounds is equal to " << lbsToKilo << " kilograms";
    cout << endl;
    
    return 0;
}