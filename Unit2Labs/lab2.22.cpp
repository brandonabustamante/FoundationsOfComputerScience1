// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.22.1

#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
using namespace std;

int main() {
    string name;
    int age;
    string city;
    string college;
    string tmp;
    string profession;
    string animal;
    string petName;
   
   
   getline(cin, name, '\n');
   // use tmp as a place holder for age, then conevert to int and store in age
   getline (cin,tmp);
   stringstream(tmp) >> age;
   getline(cin, city, '\n');
   getline(cin, college, '\n');
   getline(cin, profession, '\n');
   getline(cin, animal, '\n');
   getline(cin, petName, '\n');
   
   cout << "There once was a person named " << name << " who lived in " << city << ". ";
   cout << "At the age of " << age << ", " << name << " went to college at ";
   cout << college << ". " << name << " graduated and went to work as a " << profession;
   cout << ". " << "Then, " << name << " adopted a(n) " << animal << " named ";
   cout << petName << ". They both lived happily ever after!" << endl;
   
  

   return 0;
}