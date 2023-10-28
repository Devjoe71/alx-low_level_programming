#include <stdio.h>
/**
 * main - prints programs name
 * @argc: - This here counts the number of arguments
 * @argv: argument vector
 * Return: in our case this returns zero
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s \n", argv[0]);
	return (0);
}
