#include <stdio.h>
/**
 *main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu". next);

		if (i < 49)
		{
			printf(", ");
		}
		I++;
	}
	putchar('\n');
	return (0);
}
