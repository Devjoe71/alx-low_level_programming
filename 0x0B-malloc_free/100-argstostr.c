#include "main.h"
/**
 * argstostr - concatenates all arguments
 * @ac: size
 * @av: pointer
 * Return: a pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, n;/** used for looping*/
	int m = 0;/** used to concatenate*/
	char *op;/** pointer for place holder malloc*/
	int c = 0;/** for count*/

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for  (n = 0; av[i][n] != '\0'; n++)
			c++;
		c++;/** adds terminating no byte*/
	}
	op = malloc(sizeof(char) * c + 1);
	if (op == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			op[m] = av[i][n];
				m++;
		}
		op[m++] = '\n';
	}
	op[m] = '\n';
	return (op);
}
