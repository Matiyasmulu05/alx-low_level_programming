#include "lists.h"

/**
 * listint_len - returns the number of elements to the linked lists
 * @m: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *m)
{
	size_t num = 0;

	while (m)
	{
		num++;
		m = m->next;
	}

	return (num);
}
