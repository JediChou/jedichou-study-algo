/* Program 6.2 Lengths of strings */
#include <stdio.h>

int main(void)
{
	char str1[] = "To be or not to be";
	char str2[] = ",that is the question";
	int count = 0;	/* Stores the string length */

	while(str1[count] != '\0')
		count++;
	printf("\n\"%s\" length is %d.", str1, count);

	count = 0;
	while(str2[count] != '\0')
		count++;
	printf("\n\"%s\" length is %d.\n", str2, count);

	return 0;
}
