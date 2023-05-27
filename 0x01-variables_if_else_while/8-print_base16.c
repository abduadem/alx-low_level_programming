#include <stdio.h>

/**
 * main - Function to print the base16 values 0-9 and s a-f
 *
 * Return: Always 0.
 */

int main()
{
        char base16;

        for(base16 = 48; base16 < 58; base16++){
                putchar(base16);
        }
                for(base16 = 97; base16 <= 102; base16++){
                        putchar(base16);
                }
                putchar('\n');
                return (0);
}
