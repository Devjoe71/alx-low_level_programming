#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end
 * @filename: this is the file we are dealing with
 * @text_content: content in the file
 * Return: returns 1 if the file exists and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	int number_letters;
	int rewrite;

	if (!filename)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);
	if (text_content)
	{
		for (number_letters = 0; text_content[number_letters]; number_letters++)
			;
		rewrite = write(fl, text_content, number_letters);
		if (rewrite == -1)
			return (-1);
	}
	close(fl);
	return (1);
}
