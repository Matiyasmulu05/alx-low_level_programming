#include "main.h"

/**
 * _strspn - strspn
 * @accept: input
 * @s: input
 * Return: Always 0
 */
unsigned int _strspn(char *m, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*m)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*m == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		m++;
	}
	return (n);
}
