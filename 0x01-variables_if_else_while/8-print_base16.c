#include <stdio.h>

/**
 * main - Function to print the base16 values 0-9 and s a-f
 *
 * Return: Always 0.
 */

int main(void)
{
	char base; /* base shows base 16 variable */

        for(base = 48; base < 58; base++)
	{
		putchar(base);
        }
	for(base = 97; base <= 102; base++)
	{
		putchar(base);
	}
	putchar('\n');
	return (0);
}
