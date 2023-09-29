#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @m: The string that is measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *m)
{
	int longit = 0;

	if (*m)
	{
		longit++;
		longit += _strlen_recursion(m + 1);
	}

	return (longit);
}

