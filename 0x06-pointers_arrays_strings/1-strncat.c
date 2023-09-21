#include "main.h"

/**
 * _strncat - conctenates  two strings
 * @dest: destinaton
 * @src: source
 * @n: number of conctenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int m;

	for (m = 0 ; m < n && *src != '\0' ; m++)
	{
		dest[len + m] = src[m];
		src++;
	}
	dest[len = m] = '\0';
	return (dest);
}
