#include "main.h"
/**
 * binary_to_uint - func that converts a binary to number
 * @b: pointer to the string
 * Return: usigned int value of binary
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		number <<= 1;
		if (b[i] == '1')
			number += 1;
	}
	return (number);
}
