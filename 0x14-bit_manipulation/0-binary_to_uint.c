#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
		;
	a--;
	for (place = 1, uint = 0; a >= 0; a--)
	{
		if (b[a] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[a] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
