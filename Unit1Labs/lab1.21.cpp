// Brandon Aaron Bustamante, yxx5@txstate.edu
// No collaborator(s)
// Lab 1.21
#include <iostream>
#include <math.h>
using namespace std;

/*
    * To run with autotest cases, leave the code as-is.
    * For manual input, uncomment "cin >> a, cin >> b,
    *  cin >> c" then run the code.
*/
void quadraticEquation(int a, int b, int c){
    //cin >> a;
    //cin >> b;
    //cin >> c;
    // The quadratic equation is (b*b) - (4*a*c)
    // I make use of the power function 
    int quadEq = (pow(b,2) - (4 * (a * c)));
    cout << quadEq << endl;
}

int main() {

    int a, b, c;

    // Test 0 
    a = 2;
    b = 5;
    c = 6;
    quadraticEquation(a,b,c);

    // Test 1
    a = 8;
    b = 100;
    c = 25;
    quadraticEquation(a,b,c);

    // Test 2
    a = 11;
    b = -42;
    c = 5;
    quadraticEquation(a,b,c);

   return 0;
}
