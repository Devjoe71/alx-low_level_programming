#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints all elements
* @h: pointer
* Return: the number of nodes
*/


size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
