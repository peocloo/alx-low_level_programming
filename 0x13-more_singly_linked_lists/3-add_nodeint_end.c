#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of a listint_t list
 * @n: constant integer arg
 * @head: arg of type pointer to pointer
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_head = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp_head->next != NULL)
		temp_head = temp_head->next;
	temp_head->next = new_node;
	return (new_node);
}
