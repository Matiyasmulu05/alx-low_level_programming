#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int d, j, i;

	d = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (d < size)
	{
		j = size - d < 10 ? size - d : 10;
		printf("%08x: ", d);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + d + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + d + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		d += 10;
	}
}
