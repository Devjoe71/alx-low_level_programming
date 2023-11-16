#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free the list
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *free_me;

	while ((free_me = head) != NULL)
	{
		head = head->next;
		free(free_me->str);
		free(free_me);
	}
}
