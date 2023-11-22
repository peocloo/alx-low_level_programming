#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: arg of type pointer to pointer
 * @idx: arg of type unsigned int
 * @n: integer arg
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node;
	listint_t *temp_head = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (count = 0; temp_head && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = temp_head->next;
			temp_head->next = new_node;
			return (new_node);
		}
		else
		{
			temp_head = temp_head->next;
		}
	}
	return (NULL);
}
