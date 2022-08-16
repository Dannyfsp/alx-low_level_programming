#include "lists.h"

/**
 * free_listint2 - Entry point
 * function that frees a linked list
 * @head: pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (*head == NULL)
		return;
	node = *head;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
