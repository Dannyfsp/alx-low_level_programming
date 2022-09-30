#include "lists.h"

/**
 * sum_dlistint - Entry point
 * returns the sum of all data of a dlistint_t linked list
 *
 * @head: head of the list
 * Return: on Success sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
