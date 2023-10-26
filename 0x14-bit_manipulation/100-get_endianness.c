#include "main.h"

/**
 * get_endianness - prog checks
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int K;
	char *M;

	K = 1;
	M = (char *)&K;
	return (*M);
}
