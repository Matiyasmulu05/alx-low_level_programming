#include "main.h"

/**
 * _puts_recrution - print
 * @s: string that is printed
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
