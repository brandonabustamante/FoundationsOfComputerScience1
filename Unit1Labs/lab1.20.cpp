#include <iostream>
#include <math.h>
using namespace std;

void basicOutput (int userNum, int secondNum){
    /*
        * Run the code as-is for my standard test cases. If you want
        * to input numbers, uncomment cin >> userNum and cin >> secondNum.
    */
    cout << "Enter integer:" << endl;
    //cin  >> userNum;

    cout << "You entered: " << userNum << endl;
    cout << userNum << " squared is " << pow(userNum,2) << endl;
    cout << "And " << userNum << " cubed is " << pow(userNum,3) << "!!" << endl;
    cout << "Enter another integer:" << endl;
    //cin >> secondNum;
    cout << userNum << " + " << secondNum << " is " << userNum + secondNum << endl;
    cout << userNum << " * " << secondNum << " is " << userNum * secondNum << endl;
    cout << endl;

}

int main() {
   int userNum;
   int secondNum;

   // Test 0
   userNum = 4;
   secondNum = 0;
   basicOutput(userNum, secondNum);

   // Test 1
   userNum = 50;
   secondNum = 0;
   basicOutput(userNum, secondNum);

   // Test 2
   userNum = 4;
   secondNum = 5;
   basicOutput(userNum, secondNum);

    // Test 3
   userNum = 4;
   secondNum = 10;
   basicOutput(userNum, secondNum);

    // Test 4
   userNum = 6;
   secondNum = 7;
   basicOutput(userNum, secondNum);

   return 0;
}