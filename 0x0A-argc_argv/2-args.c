#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: counts number of commands
 * @argv: vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
