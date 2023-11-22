#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: arg of type pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_head;

	if (head == NULL)
		return;
	while (*head)
	{
		temp_head = (*head)->next;
		free(*head);
		*head = temp_head;
	}
	*head = NULL;
}
