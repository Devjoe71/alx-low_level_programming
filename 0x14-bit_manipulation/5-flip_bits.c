#include "main.h"
/**
 * flip_bits - func counts bit to change
 * @n: the first number
 * @m: the second number
 * Return: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	int i;
	unsigned long int recent;
	unsigned long int y = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		recent = y >> i;
		if (recent & 1)
			counter++;
	}
	return (counter);
}
