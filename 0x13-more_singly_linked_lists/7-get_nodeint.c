#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * function that returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the nth node
 * Return: pointer to the nth node or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;
	if (n < index)
		return (NULL);
	return (head);
}
