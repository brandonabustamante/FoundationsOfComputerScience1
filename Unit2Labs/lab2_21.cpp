// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.21 Convert from seconds

/*
 * People find it easier to read time in hours, minutes, and seconds rather than
 * just seconds.
 * Write a program that reads in seconds as input, and outputs the time in hours,
 * minutes, and seconds.
 * Ex: If the input is:
 * 4000
 * the output is:
 * Hours: 1
 * Minutes: 6
 * Seconds: 40
 * 
 * Use named constants (also known as constant variables) for any conversion
 * constants you use in your program 
 * (for example, the number of seconds in an hour)
 * Use both / and % operators in your program (and do not use loops).
*/

// Do not exceed last * 
/********************************************************************************/

#include <iostream>
using namespace std;

int main() {
   int seconds, minutes, hours;
   const int DIVISOR = 60;

   cin >> seconds;
   
   hours = seconds / DIVISOR / DIVISOR;
   minutes = (seconds / DIVISOR) % DIVISOR;
   seconds = seconds % DIVISOR;
   
   cout << "Hours: " << hours << endl;
   cout << "Minutes: " << minutes << endl;
   cout << "Seconds: " << seconds << endl;
   
   return 0;
}