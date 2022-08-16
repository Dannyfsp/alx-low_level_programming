#include "lists.h"

/**
 * sum_listint - Entry point
 * function that returns the sum of all the data(n)
 * of a node of a linked list
 * @head: pointer to the head of the linked list
 * Return: sum of all the data(n) or NULL if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
