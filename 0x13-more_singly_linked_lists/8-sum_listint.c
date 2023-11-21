#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - func that calculates sum of all
 * @head: points to the first node
 * Return: total sum
 *
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		total += tempo->n;
		tempo = tempo->next;
	}
	return (total);
}
