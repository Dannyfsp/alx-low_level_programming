#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * function that inserts a new node at a given position
 * @head: pointer to the head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: element to insert
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new_node;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
