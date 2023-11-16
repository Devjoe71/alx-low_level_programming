#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node
 * @head: represents head
 * @str: string
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int x = 0;
	unsigned int counter = 0;
	list_t *my_node;

	my_node = malloc(sizeof(list_t));
	if (my_node == NULL)
		return (NULL);
	my_node->str = strdup(str);
	while (str[x] != '\0')
	{
		counter++;
		x++;
	}
	my_node->len = counter;
	my_node->next = *head;
	*head = my_node;
	return (*head);
}
