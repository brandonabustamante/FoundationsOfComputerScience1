// Brandon Aaron Bustamante, yxx5@txstate.edu
// No collaborators
// Lab 1.20 Basic output with variables

/*
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
*/
// Do not exceed last *
/********************************************************************************/

// Will only make comments on unclear code.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int userNum, secondNum;

   cout << "Enter integer:" << endl;
   cin  >> userNum;
   
   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << pow(userNum,2) << endl;
   cout << "And " << userNum << " cubed is " << pow(userNum,3) << "!!" << endl;

   cout << "Enter another integer:" << endl;
   cin >> secondNum;
   
   cout << userNum << " + " << secondNum << " is " << userNum + secondNum << endl;
   cout << userNum << " * " << secondNum << " is " << userNum * secondNum << endl;

   return 0;
}