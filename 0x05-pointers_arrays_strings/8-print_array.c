#include "main.h"
#include <stdio.h>

/**
 * print_array - print
 * @a: Array
 * @n: print
 * Return: n
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
		if (m == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
