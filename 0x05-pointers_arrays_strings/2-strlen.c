#include <stdio.h>
#include "main.h"

/**
* _strlen - a function to returns the length of a string
* @s: string to be supplied
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
