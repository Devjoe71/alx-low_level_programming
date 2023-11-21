#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning
 * @head: points to the head
 * @n: integer for new node
 * Return: address of the new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *startnode;

	startnode = malloc(sizeof(listint_t));
	if (startnode == NULL)
		return (NULL);
	startnode->n = n;
	startnode->next = *head;

	*head = startnode;
	return (startnode);
}
