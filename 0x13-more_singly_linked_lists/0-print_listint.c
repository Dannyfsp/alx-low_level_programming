#include "lists.h"

/**
 * print_listint - Entry point
 * function that prints all elements of a linked list
 * @h: head of the linked list
 * Return: on Success - the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
