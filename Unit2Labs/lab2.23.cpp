// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.23.1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

   double length;
   double width;
   cin >> length;
   cin >> width;
   double diagonal;
   diagonal = sqrt((pow(length,2) + pow(width,2)));
   
   cout << "Diagonal: " << fixed << setprecision(2) << diagonal << endl;

   return 0;
}