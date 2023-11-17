#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function to add a node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: New element On success, otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);
	n_node->str = strdup(str);
	n_node->len = len;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = n_node;
	return (n_node);
}
