#include<stdio.h>

/**
 * main - prints out alphabets in small letters
 *
 * Return: zero
 */

int main(void)
{	int  i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
		putchar('\n');
	}
	return (0);
}
