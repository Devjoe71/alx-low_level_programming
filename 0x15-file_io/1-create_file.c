#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - func that creates a file
 * @filename: filename to be create
 * @text_content: context to be written in the file
 * Return: 1 if successfull, -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fl;
	int number_letters;
	int rewrite;

	if (!filename)
		return (-1);
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (number_letters = 0; text_content[number_letters]; number_letters++)
		;
	rewrite = write(fl, text_content, number_letters);
	if (rewrite == -1)
		return (-1);
	close(fl);
	return (1);
}
