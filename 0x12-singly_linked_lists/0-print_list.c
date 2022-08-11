#include "lists.h"

/**
 * print_list - Entry point
 * function that prints all element of a linked list
 * @h: pointer to the linked list to be printed
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[u%] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
