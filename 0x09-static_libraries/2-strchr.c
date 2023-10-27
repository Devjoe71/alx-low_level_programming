#include "main.h"
#include "string.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: values to be located
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
