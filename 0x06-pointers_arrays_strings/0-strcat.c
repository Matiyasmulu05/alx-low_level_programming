#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination s
 * @src: source s
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int m;

	for (m = 0 ; dest[m] != '\0' ; m++)
		destlen++;
	for (m = 0 ; src[m] != '\0' ; m++)
		srclen++;
	for (m = 0 ; m <= srclen ; m++)
		dest[destlen + m] = src[m];
	return (dest);
}
