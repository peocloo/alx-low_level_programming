#include "lists.h"

/**
 * add_node - add a new node to the beginning
 * @head: pointer to pointer arg
 * @n: constant integer arg
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
