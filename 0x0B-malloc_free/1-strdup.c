#include "main.h"
/**
 * _strdup - returns a pointer to newly allocated space
 * @str: pointer
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *c; /** holds return value of malloc*/
	int num = 0; /** holds the number of characters in str*/
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)/** length of string*/
		num++;
	c = malloc(sizeof(char) * num + 1); /** +1 create extra space for '\0'*/
	if (c == NULL)/** this checks if memory is located*/
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)/** loops over entire str*/
		c[i] = str[i];
	return (c);
}
