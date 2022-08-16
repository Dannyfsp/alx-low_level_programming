#include "lists.h"

/**
 * pop_listint - Entry point
 * function that deletes the head node of a linked list
 * @head: pointer to the head of the linked list
 * Return: head node's data or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
