// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.20.1
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   int aStudents;
   int bStudents;
   int cStudents;
   int dStudents;
   int fStudents;
   int totalStudents;
   double percentage;
   
   cin >> aStudents;
   cin >> bStudents;
   cin >> cStudents;
   cin >> dStudents;
   cin >> fStudents;
   
   totalStudents = aStudents + bStudents + cStudents + dStudents + fStudents;
   percentage = (double) aStudents / totalStudents;
   cout << "A grades: " << fixed << setprecision(1) << percentage * 100;
   cout << endl;
   percentage = (double) bStudents / totalStudents;
   cout << "B grades: " << fixed << setprecision(1) << percentage * 100;
   cout << endl;
   percentage = (double) cStudents / totalStudents;
   cout << "C grades: " << fixed << setprecision(1) << percentage * 100;
   cout << endl;
   percentage = (double) dStudents / totalStudents;
   cout << "D grades: " << fixed << setprecision(1) << percentage * 100;
   cout << endl;
   percentage = (double) fStudents / totalStudents;
   cout << "F grades: " << fixed << setprecision(1) << percentage * 100;
   cout << endl;
   
   
   return 0;
}