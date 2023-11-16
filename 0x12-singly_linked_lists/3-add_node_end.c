#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function that adds a node at the end
 * @head: head that points to first node
 * @str: strings
 * Return: addresss of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *holder;
	unsigned int x = 0;

	unsigned int counter = 0;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	while (str[x] != '\0')
	{
		counter++;
		x++;
	}
	end_node->len = counter;
	end_node->next = NULL;
	holder = *head;
	if (holder == NULL)
		*head = end_node;
	else
	{
		while (holder->next != NULL)
			holder = holder->next;
		holder->next = end_node;
	}
	return (*head);
}
