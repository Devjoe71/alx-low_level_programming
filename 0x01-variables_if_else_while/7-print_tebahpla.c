#include<stdio.h>
/**
 * main - prints out lowercase of alphabets in reverse
 *
 * Return: zero
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
