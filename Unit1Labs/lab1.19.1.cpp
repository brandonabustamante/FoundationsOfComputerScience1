// Brandon Aaron Bustamante, yxx5@txstate.edu
// No collaborator(s)
// Lab 1.19.1
#include <iostream>
using namespace std;


void conToSec(int hours, int mins, int seconds){
   
    const int secMultiplier = 60;
    int hoursToSec; 
    int minsToSec;

    /*
        * To run with autotest cases, leave the code as-is.
        * For manual input, uncomment "cin >> hours, 
        * cin >> mins, cin >> seconds" then run the code.
    */
    //cin >> hours;
    hoursToSec = hours * secMultiplier * secMultiplier;
    //cin >> mins;
    minsToSec = mins * secMultiplier;
    //cin >> seconds;
    cout << "Seconds: " << hoursToSec + minsToSec + seconds << endl;
}


int main() {

    // Test 0
    int hours = 1;
    int mins = 6;
    int seconds = 40;
    conToSec(hours, mins, seconds);

    // Test 1
    hours = 1;
    mins = 1;
    seconds = 1;
    conToSec(hours, mins, seconds);

    // Test 2
    hours = 0;
    mins = 1;
    seconds = 0;
    conToSec(hours, mins, seconds);

    // Test 3
    hours = 0;
    mins = 0;
    seconds = 0;
    conToSec(hours, mins, seconds);

    return 0;
}
