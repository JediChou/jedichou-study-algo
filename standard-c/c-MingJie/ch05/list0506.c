/* MingJie C - list0506.c */

#include <stdio.h>

int main(void) {
	int i;
	int va[5] = {15, 20, 30};
	int vb[5];

	for (i=0; i<5; i++)
		vb[i] = va[i];

	puts(" va vb");
	puts("------");
	for (i=0; i<5; i++)
		printf("%3d%3d\n", va[i], vb[i]);

	return 0;
}
