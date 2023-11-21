#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - func that deletes the head node
 * @head: pointer to the first element
 * Return: zero if linked list is empty
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;
	return (i);
}
