#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: arg of type pointer to pointer
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	int new_n;

	if (!head || !*head)
		return (0);
	new_n = (*head)->n;
	temp_head = (*head)->next;
	free(*head);
	*head = temp_head;

	return (new_n);
}
