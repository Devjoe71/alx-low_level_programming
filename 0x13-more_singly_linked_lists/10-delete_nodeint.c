#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - func that deletes a node at certain index
 * @head: points to the first node
 * @index: index at which node is deleted
 * Return: 1 if it is successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *new = NULL;

	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	while (x < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		x++;
	}
	new = tempo->next;
	tempo->next = new->next;
	free(new);
	return (1);
}
