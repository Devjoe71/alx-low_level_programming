#include<stdio.h>
/**
 * main - prints out numbers
 *
 * Return: zero
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
