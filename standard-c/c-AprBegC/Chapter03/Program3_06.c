/*******************************************************************************
 * File name    : Program3_06.c
 * Create time  : 2008-01-29 20:57
 * Update time  : 2012-12-20 14:42
 * Description  :
 *   1. Program 3.6 Multiple discount levels
 *   2. Compatible with VuGen 11
 ******************************************************************************/

#include <stdio.h>

int program3_6(void)
{
    const double unit_price = 3.50;     /* Unit price in dollars */
    const double discount1 = 0.05;      /* Discount for more than 10 */
    const double discount2 = 0.1;       /* Discount for more than 20 */
    const double discount3 = 0.15;      /* Discount for more than 50 */

    double total_price = 0.0;
    int quantity = 0;

    printf("Enter the number that you want to buy:");
    scanf(" %d", &quantity);

    /* A good practice, but it is ugly */
    total_price = quantity*unit_price*(1.0 -
            (quantity>50 ? discount3 : (
                           quantity>20 ? discount2 : (
                                         quantity>10 ? discount1 : 0.0))));
    printf("The price for %d is $%.2f\n", quantity, total_price);

    return 0;
}
