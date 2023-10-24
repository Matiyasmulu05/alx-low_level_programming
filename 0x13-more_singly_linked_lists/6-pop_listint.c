#include "lists.h"

/**
 * pop_listint - delete the first node of a list
 * its data
 * @head: the pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
