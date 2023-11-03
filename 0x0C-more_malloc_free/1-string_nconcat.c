#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return:NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;/* declaring pointer that holds return v(mllc)*/
	unsigned int i; /*we will use this in loops*/
	unsigned int s1_len = 0;/* initializing s1_len to 0*/
	unsigned int s2_len = 0;/* initializing s2_len to 0*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	ptr = malloc(sizeof(char) * (s1_len + n) + 1);
	if (ptr == NULL)
		return (NULL);
	if (n >= s2_len)
	{
		for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			ptr[s1_len + i] = s2[i];/*begins to conc s2 from index of s1 +1*/
		ptr[s1_len + i] = '\0';
	}
	else
	{	/* if s2 < n*/
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s2[i];
		for (i = 0; i < n; i++)
			ptr[s1_len + i] = s2[i];
		ptr[s1_len + i] = '\0';
	}
	return (ptr);
}
