/* conditional.c */

#define ABCD 2
#include <stdio.h>

int main(void)
{

#ifdef ABCD
	printf("1: yes\n");
#else
	printf("1: no\n");
#endif

#ifndef ABCD
    printf("2: no1\n");
#elif ABCD == 2
    printf("2: yes\n");
#else
    printf("2: no2\n");
#endif

#if !defined(BCDA) && (ABCD < 2*4-3)
	printf("3: yes\n");
#endif
	
	return 0;
}
