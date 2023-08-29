#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *link;

	while (head)
	{
		link = head->next;
		free(head);
		head = link;
	}
}
