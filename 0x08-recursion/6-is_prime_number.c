#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @z: number to evaluate
 * @h: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int z, int h)
{
	if (h == 1)
		return (1);
	if (z % h == 0 && h > 0)
		return (0);
	return (actual_prime(z, h - 1));
}
