#include "main.h"

/**
 * atoi - convert
 * @s: converted
 *
 * Return: the int
 */
int _atoi(char *s)
{
	int m, d, n, len, l, digit;

	m = 0;
	d = 0;
	n = 0;
	len = 0;
	l = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (m < len && l == 0)
	{
		if (s[m] == '-')
			++d;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			l = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			l = 0;
		}
		m++;
	}

	if (l == 0)
		return (0);

	return (n);
}
