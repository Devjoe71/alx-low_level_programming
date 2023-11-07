#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_len - function that finds the string length
 * @l: what we are finding length of
 * Return: the length
 */
int string_len(char *l)
{
	int i = 0;

	while (l[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * copy_str - this function copys string
 * @dest: destination for the new string
 * @src: this is the string to be copied
 * Return: the copied string
 */
char *copy_str(char *dest, char *src)
{
	int i = 0;
	int ln = string_len(src);

	while (i < ln)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * new_dog - function that prints new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nm, own;

	nm = string_len(name);
	own = string_len(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (nm + 1));
	if (new_dog == NULL)
	{	free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (own + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	copy_str(new_dog->name, name);
	copy_str(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
