#include "main.h"
/**
 * get_endianness - func will check for endianness
 * Return:0 if big endian
 */

int get_endianness(void)
{
	int i;
	char *x;

	i = 1;
	x = (char *) &i;
	return (*x);
}
