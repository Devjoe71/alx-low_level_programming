#include "main.h"
#include <stdio.h>

/**
 * error_file - Func that checks if files can be opened.
 * @file_from: file that we are copying from.
 * @file_to: file that we are copying to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main -  Function that checks the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: it will return zero
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int error_clse;
	ssize_t num_chars, newrite;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buff, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		newrite = write(file_to, buff, num_chars);
		if (newrite == -1)
			error_file(0, -1, argv);
	}

	error_clse = close(file_from);
	if (error_clse == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_clse = close(file_to);
	if (error_clse == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
