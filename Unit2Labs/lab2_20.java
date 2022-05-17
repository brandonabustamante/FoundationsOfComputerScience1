import java.util.Scanner;

// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.20

/*
 * Write a program that calculates the percentage of students receiving each letter
 * grade in a given class (A, B, C, D, or F). The program should input the number of
 * students receiving each letter grade and then display the percentage of students
 * for each letter.
 *
 * Store the number of students receiving each letter grade in an integer variable.
 *
 * Ex: If the input is:
 * 7 11 4 5 6
 * the output is:
 * 
 * A grades: 21.2
 * B grades: 33.3
 * C grades: 12.1
 * D grades: 15.2
 * F grades: 18.2
 * 
 * Use int for the data type of the input values.
 * The output should display fractional amounts to one decimal place. 
*/

// Do not exceed last * 
/********************************************************************************/

public class lab2_20 {
    
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int aStudents, bStudents, cStudents;
        int dStudents, fStudents, totalStudents;
        final int MULTIPLIER = 100;
        double percentage;

        aStudents = scnr.nextInt();
        bStudents = scnr.nextInt();
        cStudents = scnr.nextInt();
        dStudents = scnr.nextInt();
        fStudents = scnr.nextInt();

        totalStudents = aStudents + bStudents + cStudents + dStudents + fStudents;

        percentage = Double.valueOf(aStudents) / totalStudents;
        System.out.printf("A grades: %.1f\n", percentage * MULTIPLIER);

        percentage = Double.valueOf(bStudents) / totalStudents;
        System.out.printf("B grades: %.1f\n", percentage * MULTIPLIER);

        percentage = Double.valueOf(cStudents) / totalStudents;
        System.out.printf("C grades: %.1f\n", percentage * MULTIPLIER);

        percentage = Double.valueOf(dStudents) / totalStudents;
        System.out.printf("D grades: %.1f\n", percentage * MULTIPLIER);

        percentage = Double.valueOf(fStudents) / totalStudents;
        System.out.printf("F grades: %.1f\n", percentage * MULTIPLIER);

        scnr.close();
        System.exit(0); 
    }
}