#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to new space
 */
char *str_concat(char *s1, char *s2)
{
	/** we need to find length of both s1&s2*/
	int len_s1 = 0;
	int len_s2 = 0;
	int i; /** we will use this for loop*/
	char *rm; /** this will hold return value of malloc*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)/** length of s1*/
		len_s1++;
	for (i = 0; s2[i] != '\0'; i++)/** length of s2*/
		len_s2++;
	/** allocating the memory*/
	rm = malloc(sizeof(char) * (len_s1 + len_s2) + 1);/** +1 is for '\0'*/
		if (rm == NULL)
			return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		rm[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		rm[len_s1 + i] = s2[i];
	return (rm);
}
