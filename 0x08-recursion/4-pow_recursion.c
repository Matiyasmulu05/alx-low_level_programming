#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @m: value to raise
 * @a: power
 *
 * Return: result of the power
 */
int _pow_recursion(int m, int a)
{
	if (a < 0)
		return (-1);
	if (a == 0)
		return (1);
	return (m * _pow_recursion(m, a - 1));
}
