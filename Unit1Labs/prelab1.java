// Comment out the package to run Java files in your system.
// package Unit1Labs;
import java.util.Scanner;
// Brandon A Bustamante
// 02/10/22
// Pre-Lab 1 Assignment 

/*
 * Did not replicate the error fixes when converting the code.
 * Write code that takes the number of pounds the user
 * can lift (use cin), divides that number by 2.20462, and then
 * prints it to the screen. This will convert pounds to kg.
 * (200 pounds is equal to 90.7186 kilograms)
*/
// Do not exceed last *
/********************************************************************************/

public class prelab1 {
    public static void main(String[] args) {

        Scanner scnr = new Scanner(System.in);
        final double DIVISOR = 2.20462;
        int weightLbs;
        double lbsToKilo;

        weightLbs = scnr.nextInt();

        lbsToKilo = weightLbs / DIVISOR;

        System.out.println(weightLbs + " pounds is equal to " + lbsToKilo +
            " kilograms");

        scnr.close();
        System.exit(0);
        
    }
}