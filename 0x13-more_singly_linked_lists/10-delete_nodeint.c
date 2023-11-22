#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @index: unsigned int arg
 * @head: arg of type pointer to pointer
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_head = *head;
	listint_t *current_head = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_head);
		return (1);
	}
	while (count < index - 1)
	{
		if (!temp_head || !(temp_head->next))
			return (-1);
		temp_head = temp_head->next;
		count++;
	}
	current_head = temp_head->next;
	temp_head->next = current_head->next;
	free(current_head);
	return (1);
}
