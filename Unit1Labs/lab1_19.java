// Comment out the package to run Java files in your system.
// package Unit1Labs;
import java.util.Scanner;
// Brandon Aaron Bustamante, yxx5@txstate.edu
// No collaborators
// Lab 1.19 Convert to seconds

/*
 * Write a program that reads in hours, minutes and seconds as input,
 * and outputs the time in seconds only.
 * Ex: If the input is:
 * 1 6 40
 * where 1 is the number of hours, 6 is the number of minutes, and 40
 * is the number of seconds, the output is:
 * Seconds: 4000
*/
// Do not exceed last *
/********************************************************************************/

public class lab1_19 {

    public static void main(String[] args) {
        
        // Declaring required variables.
        // Must declare a Scanner object for taking user input.
        Scanner scnr = new Scanner(System.in);
        int hours, mins, seconds;
        int hoursToSec, minsToSec, totalSec;
        final int MULTIPLIER = 60;

        // Taking input and computing calculations.
        hours = scnr.nextInt();
        hoursToSec = hours * MULTIPLIER * MULTIPLIER;
        mins = scnr.nextInt();
        minsToSec = mins * MULTIPLIER;
        seconds = scnr.nextInt();
        totalSec = hoursToSec + minsToSec + seconds;
        
        // Outputting the final answer to the terminal console.
        System.out.println("Seconds: " + totalSec);

        // Closing the scanner object and terminating the program.
        scnr.close();
        System.exit(0);
    }
}