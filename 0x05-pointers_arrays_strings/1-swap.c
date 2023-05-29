#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @x: first value to be provided
 * @y: Second parameter to be provided
 * int z: addressed the swapped value will be sent to
 * Return: Always 0 (Success)
 */

void swap_int(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}
