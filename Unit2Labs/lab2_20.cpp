// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.20

/*
 * Write a program that calculates the percentage of students receiving each letter
 * grade in a given class (A, B, C, D, or F). The program should input the number of
 * students receiving each letter grade and then display the percentage of students
 * for each letter.
 *
 * Store the number of students receiving each letter grade in an integer variable.
 *
 * Ex: If the input is:
 * 7 11 4 5 6
 * the output is:
 * 
 * A grades: 21.2
 * B grades: 33.3
 * C grades: 12.1
 * D grades: 15.2
 * F grades: 18.2
 * 
 * Use int for the data type of the input values.
 * The output should display fractional amounts to one decimal place.
*/

// Do not exceed last * 
/********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int aStudents, bStudents, cStudents;
    int dStudents, fStudents, totalStudents;
    const int MULTIPLIER = 100;
    double percentage;

    cin >> aStudents >> bStudents;
    cin >> cStudents >> dStudents;
    cin >> fStudents;

    totalStudents = aStudents + bStudents + cStudents + dStudents + fStudents;  
    
    cout << fixed << setprecision(1);

    percentage = (double) aStudents / totalStudents;
    cout << "A grades: "  << percentage * MULTIPLIER;
    cout << endl;   
    
    percentage = (double) bStudents / totalStudents;
    cout << "B grades: "  << percentage * MULTIPLIER;
    cout << endl;   
    
    percentage = (double) cStudents / totalStudents;
    cout << "C grades: "  << percentage * MULTIPLIER;
    cout << endl;   
    
    percentage = (double) dStudents / totalStudents;
    cout << "D grades: "  << percentage * MULTIPLIER;
    cout << endl;   
    
    percentage = (double) fStudents / totalStudents;
    cout << "F grades: "  << percentage * MULTIPLIER;
    cout << endl;

    return 0;
}