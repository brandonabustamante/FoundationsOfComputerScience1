// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.21.1
#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;
   const int DIV = 60;

   cin >> seconds;
   
   hours = seconds / DIV / DIV;
   minutes = (seconds / DIV) % DIV;
   seconds = seconds % DIV;
   
   cout << "Hours: " << hours << endl;
   cout << "Minutes: " << minutes << endl;
   cout << "Seconds: " << seconds << endl;
   

   return 0;
}