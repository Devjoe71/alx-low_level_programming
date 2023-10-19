#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: final string after concatenation
 * @src: string to be appened to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int length_dest = 0;
	int length_src = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		length_dest++;
	for (i = 0; src[i] != '\0'; i++)
		length_src++;
	for (i = 0; i <= length_src; i++)
		dest[length_dest + i] = src[i];
	return (dest);
}
