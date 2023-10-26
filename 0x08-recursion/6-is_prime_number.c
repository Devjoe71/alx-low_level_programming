#include "main.h"
/**
 * is_prime_number - returns 1 if the integer is a prime number
 * @n: parameter
 * Return: 1 if its prime number
 * returns 0 if its not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - is it prime recursive
 * @n: to be evaluated
 * @index: iterates
 * Returns: 1 if its prime number and 0 when vise versa
 */

int actual_prime(int n, int index)
{
	if (index == 1)
		return (1);
	if (n % index == 0 && index > 0)
		return (0);
	return (actual_prime(n, index - 1));
}
