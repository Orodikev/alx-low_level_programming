#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function to add a new node at the beginning
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: Pointer the new element on success, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int i = 0;

	while (str[i])
		i++;
	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);
	n_node->str = strdup(str);
	n_node->i = i;
	n_node->next = (*head);
	(*head) = n_node;
	return (*head);
}
