/* Program 7.7 Two-Dimensional arrays and pointers */
/* Jedi Chou - 20130812-1403 */
#include <stdio.h>

int main(void)
{
	long board[3][3] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};

	printf("address of board        : %p\n", board);
	printf("address of board[0][0]  : %p\n", &board[0][0]);
	printf("but what is in board[0] : %p\n", board[0]);
	return 0;
}
