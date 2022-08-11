#include "lists.h"

/**
 * free_list - Entry point
 * function that frees a linked list
 * @head: linked list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
