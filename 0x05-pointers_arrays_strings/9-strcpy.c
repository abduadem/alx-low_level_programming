#include "main.h"
#include <stdio.h>
/*
* Auth: Gbemi Jacob Adebayo
*/

/**
 * print_array - a function that print n elements of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
