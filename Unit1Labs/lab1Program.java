import java.util.Scanner;
import java.lang.Math;
// package Unit1Labs;
// Brandon A Bustamante 
// 02/10/2022
// CS1428 Lab
// Lab 1
// Description: this program will calculate number of circles in a rectangular
// color paper

/*
 * Sample Input/Output:
 * Enter the width of a rectangle: 50
 * Enter the height of the rectangle: 10
 * Enter the radius of a circle: 3
 * Number of circles that can be cut from the rectangle: 17
 * Area of the left over color paper: 19.274
*/

// Do not exceed last *
/********************************************************************************/

public class lab1Program {
    public static void main(String[] args) {
        int width;
        // Declare the rest of the variables
        Scanner scnr = new Scanner(System.in);
        int height, radius, numOfCircles;
        double areaOfRectangle, areaOfCircle, remainPaper;
        final double PI = 3.142;

         // Prompt the user for width of a rectangle and store it:
         System.out.print("Enter the width of a rectangle: ");
         width = scnr.nextInt();

         // Prompt for and store the rectangles's height and circle's radius:
         System.out.print("Enter the rectangle's height: ");
         height = scnr.nextInt();
         System.out.print("Enter the radius of the cirlce: ");
         radius = scnr.nextInt();

        // Calculate number of circles and the left over paper and assign
        // them to the appropriate variables:
        areaOfRectangle = width * height;
        areaOfCircle = PI * (Math.pow(radius,2));
        numOfCircles = (int)areaOfRectangle / (int)areaOfCircle;
        remainPaper = areaOfRectangle - (numOfCircles * areaOfCircle);

        // Display the result to the console:
        System.out.println("Number of circles that can be cut form rectangle: " +
            numOfCircles);
        System.out.println("Area of left over color paper: " + remainPaper);

        // Exit the program:
        scnr.close();
        System.exit(0);
    }
}