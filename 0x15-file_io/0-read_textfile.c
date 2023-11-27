#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads a textfile
 * @filename: this is a file that is being read
 * @letters: number of letters
 * Return: returns length_write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t length_read, length_write;
	char *buff;

	if (!filename)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	length_read = read(fl, buff, letters);
	length_write = write(STDOUT_FILENO, buff, length_read);
	close(fl);
	free(buff);
	return (length_write);
}
