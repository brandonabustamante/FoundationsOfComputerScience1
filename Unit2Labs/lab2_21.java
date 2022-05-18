import java.util.Scanner;

// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.21 Convert from seconds

/*
 * People find it easier to read time in hours, minutes, and seconds rather than
 * just seconds.
 * Write a program that reads in seconds as input, and outputs the time in hours,
 * minutes, and seconds.
 * Ex: If the input is:
 * 4000
 * the output is:
 * Hours: 1
 * Minutes: 6
 * Seconds: 40
 * 
 * Use named constants (also known as constant variables) for any conversion
 * constants you use in your program 
 * (for example, the number of seconds in an hour)
 * Use both / and % operators in your program (and do not use loops).
*/

// Do not exceed last * 
/********************************************************************************/

public class lab2_21 {

    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int seconds, minutes, hours;
        final int DIVISOR = 60;

        seconds = scnr.nextInt();

        hours = seconds / DIVISOR / DIVISOR;
        minutes = (seconds / DIVISOR) % DIVISOR;
        seconds = seconds % DIVISOR;

        System.out.printf("Hours: %d\n", hours);
        System.out.printf("Minutes: %d\n", minutes);
        System.out.printf("Seconds: %d\n", seconds);

        scnr.close();
        System.exit(0);
    }
}