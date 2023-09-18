#include <stdio.h>

/**
 * swap_int - twointegers
 * @a: swapped
 * @b: swapped
 *
 * Return: n
 */

void swap_int(int *a, int *b)
/* function */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
