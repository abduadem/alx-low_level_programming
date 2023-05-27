#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: Always 0 (succes)
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
