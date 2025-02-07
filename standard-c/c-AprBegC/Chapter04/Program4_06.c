/*******************************************************************************
 * File name    : Program4_06.c
 * Create time  : 2008-1-30 15:23
 * Description  :
 *   Program 4.6 The almost indefinite loop - computing an average
 ******************************************************************************/

#include <stdio.h>
#include <ctype.h> /* For tolower() function */

int program4_6(void) {
    char answer = 'N';          /* Records yes or no to continue the loop */
    double total = 0.0;         /* Total of values entered */
    double value = 0.0;         /* Value entered */
    int count = 0;              /* Number of values entered */
    
    printf("\nThis program calculates the average of"
            " any number of values.");
    for( ;; ) {                         /* Indefinite loop */ 
        printf("\nEnter a value: ");    /* Prompt for the next value */
        scanf(" %lf", &value);          /* Read the next value */
        total += value;                 /* Add value to total */
        ++count;                        /* Increment count of values */
        
        /* check for more input */
        printf("Do you want to enter another value? (Y or N): ");
        scanf(" %c", &answer);          /* Read response Y or N */
        if(tolower(answer) == 'n')      /* look for any sign of no */
            break;                      /* Exit from the loop */
    }
   
    /* output the average to 2 decimal places */
    printf("\nThe average is %.2lf\n", total/count );
    return 0;
}
