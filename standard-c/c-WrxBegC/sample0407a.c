/* Program 4.7A More Interesting Guessing Game */

#include <stdio.h>
#include <stdlib.h>  /* For rand() and srand() */
#include <time.h>

int main(void)
{
	int chosen = 0;				/* The lucky number */
	int guess = 0;				/* Stores a guess */
	int count = 3;				/* The Maximum number of tries */
	int limit = 20;				/* Upper limit for pseudo-random values */

	srand(time(NULL));			/* Use clock value as starting seed */
	chosen = 1 + rand()%limit;	/* Random int 1 to limit */

	for( ; count>0; --count)
	{
		printf("\nYou have %d tr%s left.", count, count == 1 ? "y":"ies");
		printf("\nEnter a guess: ");	/* Prompt for a guess */
		scanf("%d", &guess);			/* Read in a guess */

		/* Check for a correct guess */
		if( guess == chosen ) {
			printf("\nYou guessed it!\n");
			return 0;  /* End the program */
		}

		/* Check for an invalid guess */
		if( guess<1 || guess>20)
			printf("I said between 1 and 20.\n");
		else
			printf("Sorry. %d is wrong.\n", guess);
	}

	printf("\nYou have had three tries and failed."
			" The number was %ld\n.", chosen);
	return 0;
}
