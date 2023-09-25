#include "main.h"
/**
 * _memset - mem
 * @s: pointed destination
 * @n: bytes
 * @b: constant byte
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
