// Brandon A Bustamante, yxx5@txstate.edu
// No collaborators
// LAB 2.18:1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double lgPizza = 9.99;
	const double saleTax = 0.06;
	int pizzasOrd;
	double costNoTax;
	double totalCost;
	
	cin >> pizzasOrd;
	
	// Subtotal
	costNoTax = pizzasOrd * lgPizza;
	
	totalCost = costNoTax + (costNoTax * saleTax);
	
	cout << "Subtotal: $" << fixed << setprecision(2) << costNoTax << endl;
	cout << "Total due: $" << fixed << setprecision(2) << totalCost << endl;
	
	return 0;
}