#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the node at certain index
 * @head: its the ist node
 *@index: index of the node to be returned
 * Return: Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tempo = head;

	while (tempo && x < index)
	{
		tempo = tempo->next;
		x++;
	}
	return (tempo ? tempo : NULL);
}
