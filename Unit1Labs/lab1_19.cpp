// Brandon Aaron Bustamante, yxx5@txstate.edu
// No collaborators
// Lab 1.19 Convert to seconds

/*
 * Write a program that reads in hours, minutes and seconds as input,
 * and outputs the time in seconds only.
 * Ex: If the input is:
 * 1 6 40
 * where 1 is the number of hours, 6 is the number of minutes, and 40
 * is the number of seconds, the output is:
 * Seconds: 4000
*/
// Do not exceed last *
/********************************************************************************/

#include <iostream>
using namespace std;

int main() {
   
   // Declaring required variables.
   int hours, mins, seconds;
   int hoursToSec, minsToSec, totalSec;
   const int MULTIPLIER = 60;
   
   // Taking input and computing calculations.
   cin >> hours;
   hoursToSec = hours * MULTIPLIER * MULTIPLIER;
   cin >> mins;
   minsToSec = mins * MULTIPLIER;
   cin >> seconds;
   totalSec = hoursToSec + minsToSec + seconds;
   
   // Outputting the final answer to the terminal console.
   cout << "Seconds: " << totalSec << endl;

   // Terminating the program.
   return 0;
}
