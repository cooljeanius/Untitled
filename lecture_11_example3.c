/* 
 * Eric Gallager 
 * 
 * Problem: You should take the third example program on the notes for April 18th and reverse the string using pointers.
 * 
 */

// Program that illustrates how to read an array using pointers

#include <stdio.h>

int main(void)
{
    char x[8] = {'s','t','r','e','s','s','e','d'};
    char *ptr; /* pointer of type char */
    ptr = x; /* assigns the address of the
                first element of the array to ptr */
	int direction = 0; // default
    int i = 0; // loop counter
	int valid = 0; // flag
	printf("\n Choose a direction to print: enter 0 for forwards or 1 for backwards> "); // prompt
	scanf("%i", &direction);
	printf("\n "); // I like extra whitespace
	while (valid == 0) {
		if (direction == 0) {
			for (i = 0; i < 8; i++)
			{
				printf("%c", ptr[i]);
				// ptr++; // points to the next element in the array
			}
			valid++; // get out of while-loop
			printf("\n "); // I like extra whitespace
		} else if (direction == 1) {
			for (i = 7; i >= 0; i--)
			{
				printf("%c", ptr[i]);
				// ptr--; // points to the next element in the array
			}
			valid++; // get out of while-loop
			printf("\n "); // I like extra whitespace
		} else {
			printf("\n Invalid input. Please try again. \n");
		}
	}
	return 0;
}

// newline \n

