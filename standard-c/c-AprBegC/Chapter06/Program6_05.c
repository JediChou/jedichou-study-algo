/*******************************************************************************
 * File name    : Program6_05.c
 * Create time  : 2008-1-31 17:25
 * Description  :
 *   Program 6.5 Joining strings - revitalized 
 ******************************************************************************/

#include <stdio.h>
#include <string.h>

#define STR_LENGTH 40

int program6_5(void) {
    char str1[STR_LENGTH] = "To be or not to be";
    char str2[STR_LENGTH] = ",that is the question";
    
    if(STR_LENGTH > strlen(str1) + strlen(str2))    /* Enough space ? */
        printf("\n%s\n", strcat(str1, str2));       /* yes, so display joined string */
    else
        printf("\nYou can't put a quart into a pint pot.");
    return 0;
}
