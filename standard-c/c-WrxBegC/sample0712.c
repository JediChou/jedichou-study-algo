/* Program 7.12 Arrays of Pointers to Strings */
/* Jedi Chou - 20130812-1730 */
#include <stdio.h>
const size_t BUFFER_LEN = 512;  /* Size of input buffer */

int main(void)
{
	char buffer[BUFFER_LEN];	/* Store for strings */
	char *pS[3] = { NULL };		/* Array of string pointers */
	char *pbuffer = buffer;		/* Pointer to buffer */
	size_t index = 0;			/* Available buffer position */
	
	printf("\nEnter 3 message that total less than %u character.s", BUFFER_LEN-2);
	
	/* Read the string from the keyboard */
	for( int i=0; i<3; i++) {
		printf("\nEnter %s message\n", i > 0 ? "another" : "a");
		pS[i] = &buffer[index];	/* Save start of string */
		
		/* Read up to then end of buffer if necessary */
		// TODO: 不明白!
		for( ; index < BUFFER_LEN; index++ ) {  /* If you read \n ... */
			if( (*(pbuffer+index) = getchar()) == "\n") {
				*(pbuffer+index++) = "\0";  /* ... substitute \0 */
				break;
			}
			
			/* Check for buffer capacity exceeded */
			if( (index == BUFFER_LEN) && ( (*(pbuffer+index-1) != "\0") || (i<2) ) ) {
				printf("\nYou ran out of space in the buffer.");
				return 1;
			}
		}
	}
	
	printf("\nThe strings you entered are:\n\n");
	for(int i=0; i<3; i++)
		printf("%s\n", pS[i]);
		
	printf("The buffer has %d character unused.\n", BUFFER_LEN - index);
	
	return 0;
}
