package Unit1Labs;
import java.util.Scanner;
// Brandon Aaron Bustamante, yxx5@txstate.edu
// No collaborators
// Lab 1.21 Quadratic equation discriminant

/*
 * Given a quadratic equation: ax^2+bx+c=0 the discriminant is computed using
 * this formula: b^2 - 4ac.
 * Write a program that inputs integer values for a, b, and c, and then computes
 * the discriminant.
 * Ex: If the input is:
 * 2 5 6
 * the output is:
 * -23
 * because 5x5 - 4x2x6 = 25 - 48 = -23
*/
// Do not exceed last *
/********************************************************************************/

// Will only make comments on unclear code.
public class lab1_21 {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int a, b, c, discriminant;

        a = scnr.nextInt();
        b = scnr.nextInt();
        c = scnr.nextInt();
        
        // Using built-in power function.
        discriminant = (int)(Math.pow(b,2) - (4 * (a * c)));
        System.out.println(discriminant);

        scnr.close();
        System.exit(0);

    }
}