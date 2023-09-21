#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int z1;

	z1 = n;

	if (n < 0)
	{
		_putchar('-');
		z1 = -n;
	}

	if (z1 / 10 != 0)
	{
		print_number(z1 / 10);
	}
	_putchar((z1 % 10) + '0');
}
