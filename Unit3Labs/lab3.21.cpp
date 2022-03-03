// Brandon A Bustamante, yxx5@txstate.edu
// Lab 3.21
// No callab

#include <iostream>
using namespace std;

int main() {
   int ageOfKid, numPitches, restDays;
   
   cin >> ageOfKid;
   cin >> numPitches;
   
   if ((ageOfKid < 7) || (ageOfKid > 18)){
      cout << "age out of range" << endl;
      return 0;
   }  
   
   if ((ageOfKid > 6) && (ageOfKid < 15)){
      if(numPitches > 65)
         restDays = 4;
      if((numPitches >= 51) && (numPitches <= 65))
         restDays = 3;
      if((numPitches >= 36) && (numPitches <= 50))
         restDays = 2;
      if((numPitches >= 21) && (numPitches <= 35)){
         restDays = 1;
         cout << restDays << " rest day required" << endl;
         return 0;
      }
      if((numPitches >= 1) && (numPitches <= 20))
         restDays = 0;
      cout << restDays << " rest days required" << endl;
   }
   
   if ((ageOfKid > 14) && (ageOfKid < 19)){
      if(numPitches > 76)
         restDays = 4;
      if((numPitches >= 61) && (numPitches <= 75))
         restDays = 3;
      if((numPitches >= 46) && (numPitches <= 60))
         restDays = 2;
      if((numPitches >= 31) && (numPitches <= 45)){
         restDays = 1;
         cout << restDays << " rest day required" << endl;
         return 0;
      }
      if((numPitches >= 1) && (numPitches <= 30))
         restDays = 0;
      cout << restDays << " rest days required" << endl;
   }

   return 0;
}
