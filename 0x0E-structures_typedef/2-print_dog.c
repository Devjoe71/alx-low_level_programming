#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function name
 * @d:pointer  element
 * Return: always zero
 */
void print_dog(struct dog *d)
{
	/**
	 * if (d == NULL)
	*{
		*printf("name: %s\n", "(nil)");
		*printf("age: %f\n", 0.0);
		*printf("owner: %s\n", "nil");
	*}
	*else
	*{
		*printf("name: %s\n", (d->name));
		*printf("age: %f\n", (d->age));
		*printf("owner: %s\n", (d->owner));
	*}
	*/

	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
