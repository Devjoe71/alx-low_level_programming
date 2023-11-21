#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - func that frees a list
 * @head: points to the address of first element in list
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
