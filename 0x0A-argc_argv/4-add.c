#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: counts arguments
 * @argv: argument vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int index, s;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (index = 0; index < argc; index++)
		{
			for (s = 0; argv[index][s] != '\0'; s++)
				if (isdigit(argv[index][s]))
				{
					sum = sum + atoi(argv[index]);
				}
				else
				{
					printf("Error\n");
					return (1);
				}

		}
		printf("%d\n", sum);
	}
	return (0);
}
