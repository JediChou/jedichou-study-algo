#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
	int i;
	for (i=0; i<100; i++)
		if (insert(i) == -1)
			exit(1);
	print();
	destory();
	
	return 0;
}