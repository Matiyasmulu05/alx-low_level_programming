#include "main.h"

/**
 * _memcpy - memcpy
 * @src: input
 * @dest: input
 * @n: input
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int M;

	for (M = 0; M < n; M++)
		dest[M] = src[M];

	return (dest);
}
