#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int e;
	int j;

	for (e = 0; e < 8; e++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[e][j]);
		_putchar('\n');
	}
}
