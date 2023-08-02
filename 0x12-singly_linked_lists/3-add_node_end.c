#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newend;
	list_t *tem = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newend = malloc(sizeof(list_t));
	if (!newend)
		return (NULL);

	newend->str = strdup(str);
	newend->len = len;
	newend->next = NULL;

	if (*head == NULL)
	{
		*head = newend;
		return (newend);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = newend;

	return (newend);
}
