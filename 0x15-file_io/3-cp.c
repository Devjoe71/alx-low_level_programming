#include "main.h"
#include <stdio.h>
/**
 * error_file - the func checks if files can be opened
 * @file_to: file that we are copying to
 * @file_from: file that we are copying from
 * @argv: argument vector
 * Return: does'nt return anything
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - the func checks the code
 * @argc: show the number of arguments
 * @argv: argument vector
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	int error_close;
	ssize_t num_of_chars;
	ssize_t newrite;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	num_of_chars = 1024;
	while (num_of_chars == 1024)
	{
		num_of_chars = read(file_from, buf, 1024);
		if (num_of_chars == -1)
			error_file(-1, 0, argv);
		newrite = write(file_to, buf, num_of_chars);
		if (newrite == -1)
			error_file(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_fom);
		exit(100);
	}
	return (0);

}
