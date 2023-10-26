#include "main.h"

int actual_sqrt_recursion(int n, int ite);
/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: parameters
 *  Return: -1 for non-natural square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 *actual_sqrt_recursion - finds the natural square by recursing
 * @n: parameters
 * @ite: iterator
  * Return: resulting square root
*/

int actual_sqrt_recursion(int n, int ite)
{
	if (ite * ite > n)
		return (-1);
	if (ite * ite == n)
		return (ite);
	return (actual_sqrt_recursion(n, ite + 1));
}
