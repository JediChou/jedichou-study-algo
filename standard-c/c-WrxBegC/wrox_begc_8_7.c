// Program 8.7 - A function to increase your salary
#include <stdio.h>

long *IncomePlus(long* pPay);  // Prototype for increase function

int main(void)
{
	// Variable definitions
	long your_pay = 30000L;      // Starting salay
	long *pold_pay = &your_pay;  // Pointer to pay value
	long *pnew_pay = NULL;       // Pointer to hold return value

	// Process
	pnew_pay = IncomePlus( pold_pay );

	// Out result
	printf("\nOld pay = $%ld", *pold_pay);
	printf("\nNew pay = $%ld", *pnew_pay);

	// The End !
	return 0;
}

// Function IncomePlus
long *IncomePlus(long *pPay)
{
	*pPay += 10000L;  // Increment the value for pay
	return pPay;  // Return the address
}

// Notice: The result is wrong.
