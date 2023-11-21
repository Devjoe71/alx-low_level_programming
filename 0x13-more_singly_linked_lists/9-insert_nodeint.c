#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - func that inserts a new node
 * @head: points to the first node
 * @idx: where to add new node
 * @n: data to be inserted
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *startnode;
	listint_t *tempo = *head;

	startnode = malloc(sizeof(listint_t));
	if (!startnode || !head)
		return (NULL);

	startnode->n = n;
	startnode->next = NULL;

	if (idx == 0)
	{
		startnode->next = *head;
		*head = startnode;
		return (startnode);
	}
	for (x = 0; tempo && x < idx; x++)
	{
		if (x == idx - 1)
		{
			startnode->next = tempo->next;
			tempo->next = startnode;
			return (startnode);
		}
		else
		{
			tempo = tempo->next;
		}
	}
	return (NULL);
}
