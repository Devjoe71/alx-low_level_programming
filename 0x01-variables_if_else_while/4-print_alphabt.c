#include<stdio.h>
/**
 * main - prints outall the alphabet in lowercase except q and e
 *
 * Return: in our case we will return zero
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
