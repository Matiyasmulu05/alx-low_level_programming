#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array
 * @arr: array
 * @ction: pointer print
 * @size: how many
 * Return: void
 */
void array_iterator(int *arr, size_t size, void (*action)(int))
{
	unsigned int h;

	if (arr == NULL || action == NULL)
		return;

	for (h = 0; h < size; h++)
	{
		action(arr[h]);
	}
}

