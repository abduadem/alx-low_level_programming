#include "main.h"


/**
 * print_sign - function that prints the sign of a number..
 * @r: The input number to check
 * Return: int.
 */

int print_sign(int r)
{
	if (r > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (r < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
