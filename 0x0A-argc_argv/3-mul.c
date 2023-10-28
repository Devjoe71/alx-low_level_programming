#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counts arguments
 * @argv: argument vector
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int mult = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mult = n1 * n2;
		printf("%d\n", mult);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
