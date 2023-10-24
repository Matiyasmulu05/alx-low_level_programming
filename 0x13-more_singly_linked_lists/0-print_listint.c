#include "lists.h"
/**
 * print_listint - prints all the elements in a linked list
 * @m: linked lists
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *m)
{
	size_t num = 0;

	while (m)
	{
		printf("%d\n", m->n);
		num++;
		m = m->next;
	}

	return (num);
}

