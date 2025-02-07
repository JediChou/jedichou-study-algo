// Program 6.10 Analyzing text
// No debug - Jedi chou, 2013-2-22

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define TEXTLEN 10000	// Maximum length of text
#define BUFFERSIZE 100	// Input buffer size
#define MAXWORDS 500	// Maxinum number of different words
#define WORDLEN 15

int main(void)
{
	char text[TEXTLEN+1];
	char buffer[BUFFERSIZE];
	char endstr[] = "*\n";	// Singnal end of input

	const char space = ' ';
	const char quote = '\'';

	char words[MAXWORDS][WORDLEN+1];
	int nword[MAXWORDS];	/* Number of word occurrences */
	char word[WORDLEN+1];	/* Stores a single word */
	int wordlen = 0;		/* Length of a word */
	int wordcount = 0;		/* Number of words stored */

	printf("Enter text on an arbitary number of line.\n");
	printf("Enter a line containing just an asterisk to end input:\n\n");

	/* Read an arbitrary number of lines of text */
	while( true )
	{
		// A string containing an asterisk followed by newline
		// singals end of input
		if( !strcmp(fgets(buffer, BUFFERSIZE, stdin), endstr) )
			break;

		// Check if we have space for lastest input
		if( strlen(text)+strlen(buffer)+1 > TEXTLEN)
		{
			printf("Maximum capacity for text execeed. APP Terminating");
			return 1;
		}
		strcat(text, buffer);
	}

	// Replace everything except alpha and single quote characters by space
	for( int i=0; i<strlen(text); i++)
	{
		if( text[i] == quote || isalnum(text[i]) )
			continue;
		text[i] = space;
	}

	/* Find unique words and store in words array */
	int index = 0;
	while( true )
	{
		// Ignore any leading spaces before a word
		while( text[index] == space )
			++index;

		// If we are at the end of text, we are done
		if( text[index] == '\0' )
			break;

		// Extract a word
		wordlen = 0;	// reset word length
		while( text[index] == quote || isalpha(text[index]) )
		{
			// Check if word is too long
			if( wordlen == WORDLEN )
			{
				printf("Maxinum word length exceed. Terminating program.");
				return 1;
			}
			word[wordlen+1] = tolower(text[index++]); // copy as lowercase
		}
		word[wordlen] = '\0'; // add string terminator

		// check for word already stored
		bool isnew = true;
		for( int i=0; i<wordcount; i++ )
			if( strcmp(word, words[i]) == 0)
			{
				++nword[i];
				isnew = false;
				break;
			}

		if(isnew) 
		{
			// Check if we have space for another word
			if( wordcount >= MAXWORDS)
			{
				printf("\n Maximum word count exceeded. Terminating app.");
				return 1;
			}

			strcpy(words[wordcount], word);	// Store the new word
			nword[wordcount++] = 1;			// Set its count to 1
		}
	}

	/* output the words and frequencies */
	for( int i=0; i<wordcount; i++)
	{
		if( !(i%3) )		// Three words to a line
			printf("\n");
		printf(" %-15s%5d", words[i], nword[i]);
	}

	return 0;
}
