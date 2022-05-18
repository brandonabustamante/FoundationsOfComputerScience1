// Brandon A Bustamante yxx5@txstate.edu
// No collaborators
// LAB 2.18 Ordering pizza

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

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double LGPIZZA = 9.99;
	const double SALESTAX = 0.06;
	int pizzasOrdered;
	double subTotal, totalCost;
	
	cin >> pizzasOrdered;
	
	subTotal = pizzasOrdered * LGPIZZA;
	totalCost = subTotal + (subTotal * SALESTAX);
	
	cout << fixed << setprecision(2);
	cout << "Subtotal: $"  << subTotal << endl;
	cout << "Total due: $" << totalCost << endl;
	
	return 0;
}