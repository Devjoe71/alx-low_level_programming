#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end
 * @head: points at the head of the list
 * @n: integer of the list
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode, *end;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
		*head = endnode;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = endnode;
	}
	return (*head);
}
