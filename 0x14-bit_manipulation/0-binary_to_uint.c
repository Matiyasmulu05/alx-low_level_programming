#include "main.h"

/**
 * binary_to_uint - convers a binary number
 * @b: pointer
 *
 * Return: the converted number, or 0 if there is error
 */

unsigned int binary_to_uint(const char *b)
{
	int K;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (K = 0; b[K] != '\0'; K++)
	{
		if (b[K] != '0' && b[K] != '1')
			return (0);
	}
	for (K = 0; b[K] != '\0'; K++)
	{
		num <<= 1;
		if (b[K] == '1')
			num += 1;
	}
	return (num);
}
