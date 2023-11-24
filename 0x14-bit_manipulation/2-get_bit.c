#include "main.h"
/**
 * get_bit - returns bit value at index
 * @n: number to check bit
 * @index: index to be checked
 * Return: -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div;
	unsigned long int check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);

}
