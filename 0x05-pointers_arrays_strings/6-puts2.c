#include "main.h"

/**
 * puts2 - print
 * @str: string
 * Return: n
 */

void puts2(char *str)

{
	int m;
	int a = 0;

	while (str[a] != '\0')
	{
	a++;
	}
	for (m = 0; m < a; m += 2)
	{
	_putchar(str[m]);
	}
	_putchar('\n');
}
