/* Program 7.10 Understand pointers to your hat size - if you dare */
/* Jedi Chou - 20130812-1417 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	/* Hat sizes as characters */
	char size[3][12] = {
		{'6', '6', '6', '6', '7', '7', '7', '7', '7', '7', '7', '7'},
		{'1', '5', '3', '7', ' ', '1', '1', '3', '1', '5', '3', '7'},
		{'2', '8', '4', '8', ' ', '8', '4', '8', '2', '8', '4', '8'}
	};
	
	/* Value of in 1/8 inches */
	int headsize[12] = {164, 166, 169, 172, 175, 178, 181, 184, 188, 191, 194, 197};
	
	char *psize = *size;
	int *pheadsize = headsize;
	
	float cranium = 0.0;		/* Head circumference in decimal inches */
	float your_head = 0;		/* Head size in whole eights */
	bool hat_found = false;		/* Indicates when a hat is found to fit */
	bool too_small = false;		/* Indicates head size is too small */
	
	/* Get the circumference of the head */
	printf("\nEnter the circumference of your head above your eyebrows in inches as a decimal value: ");
	scanf(" %f", &cranium);
	
	/* Convert to whole eights of an inch */
	your_head = (int)(8.0 * cranium);
	
	/* Search for a hat size */
	for(int i=0; i<12; i++) {
		/* Find head size in the head size array */
		if(your_head > *(pheadsize + i))
			continue;
			
		/* 
		 * If it is the first element and the head size is
		 * more than 1/8 smaller then the head is too small
		 * for a hat
		 */
		if( (i==0) && (your_head < (*pheadsize)-1)) {
			printf("\nYou are the proverbial pinhead. No hat for you.\n");
			too_small = true;
			break; /* Exit the loop */
		}
		
		/*
		 * If head size more than 1/8 smaller than the current
		 * element in head size array, take the next element down
		 * as the head size
		 */
		 if( your_head < *(pheadsize+i)-1 )
		 i--;
		 
		 printf(
			"\nYour hat size is %c %c%c%c\n",
			*(psize + i),			/* First row of size */
			*(psize + 1*12 + i),	/* Second row of size */
			(i==4) ? ' ' : '/',
			*(psize + 2*12 + i)	/* Third row of size */
		 );
		 hat_found = true;
		 break;
	}
	if( !hat_found && !too_small) {
		printf("\nYou, in technical parlance, are a fathead. No hat for you!");
	}
	
	return 0;
}
