#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *reverse_listint - func that reverses the list
 *@head:points to the first node
 *Return: pointer to the 1st node
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}
	*head = before;
	return (*head);
}
