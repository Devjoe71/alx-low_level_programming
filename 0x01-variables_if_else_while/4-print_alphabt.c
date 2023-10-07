#include<stdio.h>
/**
 * main - prints outall the alphabet in lowercase except q and e
 *
 * Return: in our case we will return zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
