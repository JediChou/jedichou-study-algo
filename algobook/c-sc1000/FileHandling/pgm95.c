/*
 * c program to create a file called emp.rec and store information
 * about a person, in terms of this name, age and salary.
 */

#include <stdio.h>

void main()
{
	FILE *fptr;
	char name[20];
	int age;
	float salary;

	/* open for writing */
	fptr = fopen("emp.rec", "w");

	if ( fptr == NULL )
	{
		printf("File does not exists \n");
		return;
	}

	printf("Enter the name \n");
	scanf("%s", name);
	fprintf(fptr, "Name    = %s\n", name);
	
	printf("Enter the age\n");
	scanf("%d", &age);
	fprintf(fptr, "Age     = %d\n", age);

	printf("Enter the salary\n");
	scanf("%f", &salary);
	fprintf(fptr, "Salary  = %f\n", salary);

	fclose(fptr);
}
