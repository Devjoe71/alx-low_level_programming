#include "lists.h"
#include <stdio.h>
/**
 * listint_len - func that returns the no. of elements
 * @h: head pointer
 * Return: number of elements
 */


size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
