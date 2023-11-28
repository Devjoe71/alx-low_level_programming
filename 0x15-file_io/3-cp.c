#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * error_file - func that checks if the files can be opened
 * @file_from: we are copying content from this file
 * @file_to: and copying it to this file
 * @argv: argument vector
 * Return: nothing
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
 * main - func that checks the code
 * @argc: number of arguments written
 * @argv: argument vector
 * Return: it returns zero
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t num_chars, new_write;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
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
		new_write = write(file_to, buff, num_chars);
		if (new_write == -1)
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
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
