#include <stdio.h>
#include "main.h"
/**
 * print_rev - This function prints a string in reverse order
 * @s: pointer parameter
 */

void print_rev(char *s)
{
	int n = 0;
	int m;

	while (s[n] != '\0')
	{
		n++;
	}
	for (m = n - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
