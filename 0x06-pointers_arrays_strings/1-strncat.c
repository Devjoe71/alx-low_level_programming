#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to be moved to dest
 * @n: pointer
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		len_dest++;
	for (j = 0; j < n && *src != '\0'; j++)
	{
		dest[len_dest + j] = *src;
		src++;
	}
	dest[len_dest + j] = '\0';
	return (dest);
}
