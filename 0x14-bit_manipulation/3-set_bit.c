 #include "main.h"
/**
 * set_bit - func that set value of bit to 1
 * @n: set the number
 * @index: index at set bit
 * Return: 1 for successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
