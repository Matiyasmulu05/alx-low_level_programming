#include <stdio.h>

/**
 * _strlen - Returns
 * @str: The string
 * Return: @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
