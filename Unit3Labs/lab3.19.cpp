// Brandon A Bustamante, yxx5@txstate.edu
// Lab 3.19
// no collab
#include <iostream>
#include <string>
using namespace std;

int main() {

   string str1, str2;
   cin >> str1;
   cin >> str2;
   if (str1.size() == str2.size()){
      cout << "same length" << endl;
      return 0;
   }
   if (str1.size() < str2.size())
      cout << str2 <<endl;
   else 
      cout << str1 << endl;

   return 0;
}