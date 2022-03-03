// Brandon A Bustamante, yxx5@txstate.edu
// Lab 3.22
// No collab

#include<iostream>
#include<iomanip>
using namespace std;

const double ECON_WEEKEND = 9.99;           // Economy weekend cost
const double INTER_WEEKEND = 14.99;         // Intermediate weekend cost
const double STANDARD_WEEKEND = 17.99;      // Standard weekend cost
const double FULL_SIZE_WEEKEND = 19.99;     // Full Size weekend cost 

const double ECON_WEEKDAY = 39.99;          // Economy weekday cost 
const double INTER_WEEKDAY = 49.99;         // Intermediate weekday cost
const double STANDARD_WEEKDAY = 59.99;      // Standard weekday cost
const double FULL_SIZE_WEEKDAY = 69.99;     // Full Size weekday cost

const double DISCOUNT_LIMIT = 300.00;       // Limit for discount eligibility
const double DISCOUNT = .1;                 // The discount perecentage

int main() {
   
   char category;
   int weekendDays, weekDays;
   double weekendTol, weekDayTol, finalTol;
   
   cin >> category;
   cin >> weekendDays;
   cin >> weekDays;
   
   switch(category){
      case 'E':
      case 'e':
         weekendTol = weekendDays * ECON_WEEKEND;
         weekDayTol = weekDays * ECON_WEEKDAY;
         finalTol = weekDayTol + weekendTol;
         if (finalTol > DISCOUNT_LIMIT)
            finalTol = finalTol - (finalTol * DISCOUNT);
         break;
      case 'I':
      case 'i':
         weekendTol = weekendDays * INTER_WEEKEND;
         weekDayTol = weekDays * INTER_WEEKDAY;
         finalTol = weekDayTol + weekendTol;
         if (finalTol > DISCOUNT_LIMIT)
            finalTol = finalTol - (finalTol * DISCOUNT);
         break;
      case 'S':
      case 's':
         weekendTol = weekendDays * STANDARD_WEEKEND;
         weekDayTol = weekDays * STANDARD_WEEKDAY;
         finalTol = weekDayTol + weekendTol;
         if (finalTol > DISCOUNT_LIMIT)
            finalTol = finalTol - (finalTol * DISCOUNT);
         break;
      case 'F':
      case 'f':
         weekendTol = weekendDays * FULL_SIZE_WEEKEND;
         weekDayTol = weekDays * FULL_SIZE_WEEKDAY;
         finalTol = weekDayTol + weekendTol;
         if (finalTol > DISCOUNT_LIMIT)
            finalTol = finalTol - (finalTol * DISCOUNT);
         break;
         default:
            cout << "Invalid Category Code. Available Options: E, I, S and F." << endl;
            return 0;
   }
   cout << "The cost of the rental is: $" << finalTol << endl;

   return 0;
}