import java.util.Scanner;
// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.18

/*
 * A local pizza shop is selling a large pizza for $9.99. Given the number of
 * pizzas to order as input, output the subtotal for the pizzas, and then output
 * the total after applying a sales tax of 6%.
 *
 * Output each floating-point value with two digits after the decimal point,
 * which can be achieved as follows: 
 * cout << fixed << setprecision(2);
 * 
 * Ex: If the input is:
 * 3
 * the output is:
 * Subtotal: $29.97
 * Total due: $31.77
 * 
 * Note: Use named constants (also known as constant variables) for the
 * pizza cost and the sales tax amount.
*/

// Do not exceed last *
/********************************************************************************/

public class lab2_18 {

    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        final double LGPIZZA = 9.99;
        final double SALESTAX = 0.06;
        int pizzasOrdered;
        double subTotal, totalCost;

        pizzasOrdered = scnr.nextInt();

        subTotal = pizzasOrdered * LGPIZZA;

        totalCost = subTotal + (subTotal * SALESTAX);

        System.out.printf("Subtoal: $%.2f \n", subTotal);
        System.out.printf("Total due: $%.2f \n", totalCost);

        scnr.close();
        System.exit(0);
    }
}