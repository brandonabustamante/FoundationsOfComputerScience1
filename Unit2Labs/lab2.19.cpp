// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.19.1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   double caffeineMg;
   double afterSix;
   double afterTwelve;
   double afterTwentyFour;
   
   cin >> caffeineMg;
   
   afterSix = caffeineMg / 2.0;
   afterTwelve = afterSix / 2.0;
   afterTwentyFour = afterTwelve / 4.0;
   
   cout << "After 6 hours: " << fixed << setprecision(2) << afterSix << " mg";
   cout << endl;
   cout << "After 12 hours: " << fixed << setprecision(2) << afterTwelve << " mg";
   cout << endl;
   cout << "After 24 hours: " << fixed << setprecision(2) << afterTwentyFour << " mg";
   cout << endl;
   
   return 0;
}
