#include <stdio.h>
/**
 * main  - prints the number of arguments passed into it
 * @argc: count elements
 * @argv: argument vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
