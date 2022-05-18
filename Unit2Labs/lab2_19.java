import java.util.Scanner;

// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.19 Caffeine levels

/*
 * A half-life is the amount of time it takes for a substance or entity to fall to
 * half its original value. Caffeine has a half-life of about 6 hours in humans.
 * Given caffeine amount (in mg) as input, output the caffeine level after 6, 12,
 * and 24 hours.
 * Output each floating-point value with two digits after the decimal point,
 * which can be achieved by executing
 * cout << fixed << setprecision(2); 
 *  once before all other cout statements.
 * 
 * Ex: If the input is:
 * 100
 * the output is: 
 * 
 * After 6 hours: 50.00 mg
 * After 12 hours: 25.00 mg
 * After 24 hours: 6.25 mg
 */

// Do not exceed last *
/********************************************************************************/

public class lab2_19 {

    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        double caffeineMg, afterSix, afterTwelve, afterTwentyFour;
        final double DIVISOR = 2.0;

        caffeineMg = scnr.nextInt();

        afterSix = caffeineMg / DIVISOR;
        afterTwelve = afterSix / DIVISOR;
        afterTwentyFour = afterTwelve / DIVISOR / DIVISOR;

        System.out.printf("After 6 hours: %.2f  mg\n", afterSix);
        System.out.printf("After 12 hours: %.2f mg\n", afterTwelve);
        System.out.printf("After 24 hours: %.2f mg\n", afterTwentyFour);

        scnr.close();
        System.exit(0);
    }
}