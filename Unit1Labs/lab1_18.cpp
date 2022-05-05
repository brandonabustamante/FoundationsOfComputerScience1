// Brandon Aaron Bustamante, yxx5@txstate.edu
// No collaborators
// Lab 1.18 Formatted output: ASCII art (bicyclist)

/*
 * Program Specifications Pictures made from keyboard characters
 * are known as ASCII art and can be quite intricate. ASCII Art 
 * Archive provides examples. Write a program that outputs a drawing
 * of a bicyclist using cout. For ALL labs, end the last line with
 * newline (unless otherwise stated).

 * Note: a backslash \ in a string acts as an escape character, such
 * as with a newline \n. So, to print a single backslash, include two
 * backslashes next to each other. Ex: The following prints a single
 * backslash: cout << "\\";
 * The output is (note, this is three lines of text):
 *  __o
 *  _ \<_
 * (_)/(_)
*/
// Do not exceed last *
/********************************************************************************/

#include <iostream>
using namespace std;

int main() {

    cout << "   __o" << endl;
    cout << " _ \\<_" << endl;
    cout << "(_)/(_)" << endl;

    return 0;
}