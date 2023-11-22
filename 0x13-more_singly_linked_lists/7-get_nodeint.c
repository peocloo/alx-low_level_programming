#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: argu of type pointer to struct
 * @index: arg of type unsigned int
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp_head = head;

	while (temp_head && count < index)
	{
		temp_head = temp_head->next;
		count++;
	}
	return (temp_head ? temp_head : NULL);
}
