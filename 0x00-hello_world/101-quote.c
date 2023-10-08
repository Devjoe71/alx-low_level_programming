#include<stdio.h>
#include<unistd.h>
/**
 * main - this is our entry point
 *
 * Return: it returns one (1)
 */

int main(void)
{
	write(2,
			"and that piece of art is usefull\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
