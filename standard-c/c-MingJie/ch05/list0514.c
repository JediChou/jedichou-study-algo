/* MingJie C - list0514.c */

#include <stdio.h>

int main(void)
{
	int i, j;
	int ma[2][3] = { {1,2,3}, {4,5,6} };
	int mb[2][3] = { {6,3,4}, {5,1,2} };
	int mc[2][3] = {0};

	for (i=0; i<2; i++)
		for(j=0; j<3; j++)
			mc[i][j] = ma[i][j] + mb[i][j];

	for (i=0; i<2; i++) {
		for (j=0; j<3; j++)
			printf("%d ", mc[i][j]);
		putchar('\n');
	}

	return 0;
}
