#include <stdio.h>

/**
 * Main-  prints all possible different combinations of two digitS.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int m, n; /* m=tens and n=ones */

	for (m = '0'; m <= '8'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (!(m == n) && (m < n)) /* Eliminates repitition and tens < ones */
			{
				putchar(m);
				putchar(n);

				if (!(n == '9' && m == '8'))/*addes commma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
