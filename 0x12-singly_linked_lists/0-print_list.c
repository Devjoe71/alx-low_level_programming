#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - a function that prints the list
 * @h: linked list
 * Return: it returns  number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h != NULL)
	{
		if  (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	       h = h->next;
	       num_nodes++;
	}
	return (num_nodes);
}
