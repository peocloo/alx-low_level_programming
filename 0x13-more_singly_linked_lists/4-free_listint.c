#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: argu of type pointer to struct
 */
void free_listint(listint_t *head)
{
	listint_t *temp_head;

	while (head)
	{
		temp_head = head->next;
		free(head);
		head = temp_head;
	}
}
