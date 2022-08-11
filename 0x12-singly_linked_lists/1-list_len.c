#include "lists.h"

/**
 * list_len - Entry point
 * function that returns the number of element a linked list
 * @h: pointer to the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
