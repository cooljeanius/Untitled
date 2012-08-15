/*
 *  method2.c
 *  Untitled
 *
 *  Created by Eric Gallager on 8/15/12.
 *  Copyright 2012 George Washington University. All rights reserved.
 *
 *	Does the same thing as the other file, except slightly differently
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
				printf("%c", *ptr);
				ptr++; // points to the next element in the array
			}
			valid++; // get out of while-loop
			printf("\n "); // I like extra whitespace
		} else if (direction == 1) {
			for (i = 0; i < 7; i++) // go through array forwards first
			{
				ptr++; // points to the next element in the array
			}
			for (i = 8; i >= 0; i--) // now that we're at the end of the array, go back backwards through it
			{
				printf("%c", *ptr);
				ptr--; // points to the next element in the array
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


