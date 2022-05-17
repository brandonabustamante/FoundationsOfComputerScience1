# Brandon A Bustamante yxx5@txstate.edu
# No collaborators
# LAB 2.18

"""
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
"""

# Do not exceed last *
#********************************************************************************#

if __name__ == "__main__":
    LGPIZZA = 9.99
    SALESTAX = 0.06

    tmpIn = input()
    pizzas_ordered = int(tmpIn)

    sub_total = pizzas_ordered * LGPIZZA
    total_cost = sub_total + (sub_total * SALESTAX)

    print("Subtotal: $%.2f" %sub_total)
    print("Total due: $%.2f" %total_cost)

    quit()
