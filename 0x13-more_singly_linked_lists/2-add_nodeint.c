#include "lists.h"

/**
 * add_nodeint - A function to add a node to the link list
 * @head: A pointer to the first node of the linked list
 * @n:the data to insert in that new node
 *
 * Return: Pointer to new node and NULL if no new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	else
	{
	new->n = n;
	new->next = *head;
	*head = new;
	}
	return (new);
}
