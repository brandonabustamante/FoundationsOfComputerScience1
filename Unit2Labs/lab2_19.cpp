// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.19 Caffeine levels

/*
 * A half-life is the amount of time it takes for a substance or entity to fall to
 * half its original value. Caffeine has a half-life of about 6 hours in humans.
 * Given caffeine amount (in mg) as input, output the caffeine level after 6, 12,
 * and 24 hours.
 * Output each floating-point value with two digits after the decimal point,
 * which can be achieved by executing
 * cout << fixed << setprecision(2); 
 *  once before all other cout statements.
 * 
 * Ex: If the input is:
 * 100
 * the output is: 
 * 
 * After 6 hours: 50.00 mg
 * After 12 hours: 25.00 mg
 * After 24 hours: 6.25 mg
 */

// Do not exceed last *
/********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   double caffeineMg, afterSix, afterTwelve, afterTwentyFour;
   const double DIVISOR = 2.0;
   
   cin >> caffeineMg;
   
   afterSix = caffeineMg / DIVISOR;
   afterTwelve = afterSix / DIVISOR;
   afterTwentyFour = afterTwelve / DIVISOR / DIVISOR;
   
   cout << fixed << setprecision(2); 
   cout << "After 6 hours: " << afterSix << " mg";
   cout << endl;
   cout << "After 12 hours: " << afterTwelve << " mg";
   cout << endl;
   cout << "After 24 hours: " << afterTwentyFour << " mg";
   cout << endl;
   
   return 0;
}
