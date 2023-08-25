#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @ptr: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *ptr)
{
	size_t t = 0;

	while (ptr)
	{
		if (!ptr->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		t++;
	}

	return (t);
}
