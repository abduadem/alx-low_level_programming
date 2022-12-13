#include "main.h"


/**
 * print_sign - prints the sign of a number
 * @r: the int to be printed
 * Return: 1 if int is greater than zero
 * 0 of int is zero
 * -1 if int is less than zero
 */
int print_sign(int r)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
