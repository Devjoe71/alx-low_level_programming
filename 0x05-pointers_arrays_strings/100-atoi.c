#include "main.h"
/**
 * _atoi - converts a string into an integer
 * @s: pointer
 * Return: void
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	int k = 0; 
	int l = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && j == 0)
	{
		if (s[i] == '-')
			n++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			k = s[i] - '0';
			if (n % 2)
				k = -k;
			m = m * 10 + k;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}
	if (j == 0)
		return (0);
	return (m);
}
