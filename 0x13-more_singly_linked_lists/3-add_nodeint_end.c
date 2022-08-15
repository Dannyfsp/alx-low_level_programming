#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * function that adds a new node at the end of a linked list
 * @head: head of the linked list
 * @n: integer parameter to add
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *cursor = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor_next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
