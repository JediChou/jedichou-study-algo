/*******************************************************************************
 * File name    : Program2_5.c
 * Create time  : 2008-1-28 11:17
 * Description  :
 *   Let��s look at a food-based program that demonstrates subtraction and
 *   multiplication:
 *   Program 2.5 Calculations with cookies
 *   This program produces the following output:
 *     I have eaten 2 cookies. There are 3 cookies left
 *     I have eaten three more. Now there are 0 cookies left
 *     Total energy consumed is 625 calories.
 ******************************************************************************/

#include <stdio.h>

int program2_5(void) {
    int cookies = 5;
    int cookie_calories = 125;      /* Calories per cookie */
    int total_eaten = 0;            /* Total cookies eaten */
    
    int eaten = 2;                  /* Number to be eaten */
    cookies = cookies - eaten;      /* Subtract number eaten from cookies */
    total_eaten = total_eaten + eaten;
    printf("\nI have eaten %d cookies. There are %d cookies left", 
            eaten, cookies);
    
    eaten = 3;                      /* New value for cookies to be eaten */
    cookies = cookies - eaten;      /* Subtract number eaten from cookies */
    total_eaten = total_eaten + eaten;
    printf("\nI have eaten %d more. Now there are %d cookies left\n", 
            eaten, cookies);
    
    printf("\nTotal energy consumed is %d calories.\n",
            total_eaten*cookie_calories);
    return 0;
}
