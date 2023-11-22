#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * @head: arg
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_head = head;

	while (temp_head)
	{
		sum += temp_head->n;
		temp_head = temp_head->next;
	}
	return (sum);
}
