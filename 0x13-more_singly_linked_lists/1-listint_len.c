#include "lists.h"

/**
 * listint_len - Entry point
 * function that returns the number of elements in a linked list
 * @h: head of the linked list
 * Return: on Success - the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
