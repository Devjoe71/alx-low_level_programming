#include "main.h"

/**
 *  _islower - prints lowercases
 *
 * @c: we check for parameters involved.
 *  Return: 1 if c is lowercase or zero if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
