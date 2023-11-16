#include "lists.h"

/**
 * list_len - number of elements
 * @h: elements
 * Return: total no. of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
