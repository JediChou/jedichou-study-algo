/*******************************************************************************
 * File name    : Program3_11.c
 * Create time  : 2008-1-30 13:21
 * Description  :
 *   Program 3.11 A calculator
 ******************************************************************************/

#include <stdio.h>

int program3_11(void) {
    double number1 = 0.0;   /* First operand value a decimal number */
    double number2 = 0.0;   /* Second operand value a decimal number */
    char operation = 0;     /* Operation - must be +, -, *, /, or % */
    
    printf("\nEnter the calculation\n");
    scanf("%lf %c %lf", &number1, &operation, &number2);
    
    /* Code to check the input goes here */
    switch(operation) {
        case '+':       /* No checks necessary for add */
            printf("= %lf\n", number1 + number2);
            break;
        case '-':       /* No checks necessary for subtract */
            printf("= %lf\n", number1 - number2);
            break;
        case '*':       /* No checks necessary for multiply */
            printf("= %lf\n", number1 * number2);
            break;
        case '/':
            if(number2 == 0) /* Check second operand for zero */
                printf("\n\n\aDivision by zero error!\n");
            break;
        case '%': /* Check second operand for zero */
            if((long)number2 == 0)
                printf("\n\n\aDivision by zero error!\n");
            break;
        default: /* Operation is invalid if we get to here */
            printf("\n\n\aIllegal operation!\n");
            break;
    }
    /* Plus the rest of the code for the program */
    return 0;
}
