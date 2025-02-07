/*******************************************************************************
 * Filename     : Program7_11.c
 * Create time  : 2007/12/28 pm 1:49
 * Description  : 
 *   Program 7.11 A dynamic prime example 
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int program7_11(void) {
    unsigned long *primes = NULL;   /* Pointer to primes storage area */
    unsigned long trial = 0;        /* Integer to be tested */
    
    bool found = false;             /* Indicates when we find a prime */
    size_t total = 0;               /* Number of primes required */
    size_t count = 0;               /* Number of primes found */
    
    printf("How many primes would you like - you'll get at least 4? ");
    scanf("%u", &total);            /* Total is how many we need to find */
    total = total<4U ? 4U:total;    /* Make sure it is at least 4 */
    
    size_t i = 0;
    
    /* Allocate sufficient memory to store the number of primes required */
    primes = (unsigned long *)malloc(total*sizeof(unsigned long));
    if(primes == NULL) {
        printf("\nNot enough memory. Hasta la Vista, baby.\n");
        return 1;
    }
    
    /* We know the first three primes */
    /* so let's give the program a start. */
    *primes = 2UL;          /* First prime */
    *(primes+1) = 3UL;      /* Second prime */
    *(primes+2) = 5UL;      /* Third prime */
    count = 3U;             /* Number of primes stored */
    trial = 5U;             /* Set to the last prime we have */
    
    /* Find all the primes required */
    while(count<total) {
        trial += 2UL; /* Next value for checking */
        
        /* Try dividing by each of the primes we have */
        /* If any divide exactly - the number is not prime */
        i = 0;
        for( i ; i < count ; i++)
            if(!(found = (trial % *(primes+i))))
                break;      /* Exit if no remainder */
        if(found)           /* we got one - if found is true */
            *(primes+count++) = trial;  /* Store it and increment count */
    }
    
    /* Display primes 5-up */
    i = 0;
    for( i ; i < total ; i++) {
        if(!(i%5U))
            printf("\n");   /* Newline after every 5 */
        printf("%12lu", *(primes+i));
    }
    printf("\n");           /* Newline for any stragglers */
    
    return 0;
}
