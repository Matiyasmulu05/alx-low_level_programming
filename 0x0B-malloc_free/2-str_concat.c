#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @m1: input one
 * @m2: input two
 * Return: m1 and m2
 */
char *str_concat(char *m1, char *m2)
{
	char *conct;
	int k, ci;

	if (m1 == NULL)
		m1 = "";
	if (m2 == NULL)
		m2 = "";

	k = ci = 0;
	while (m1[k] != '\0')
		k++;
	while (m2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (k + ci + 1));

	if (conct == NULL)
		return (NULL);
	k = ci = 0;
	while (m1[k] != '\0')
	{
		conct[k] = m1[k];
		k++;
	}

	while (m2[ci] != '\0')
	{
		conct[k] = m2[ci];
		k++, ci++;
	}
	conct[k] = '\0';
	return (conct);
}
