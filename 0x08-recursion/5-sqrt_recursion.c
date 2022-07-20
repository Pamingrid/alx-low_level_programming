#include "main.h"
/**
 * sqrt_a - function that returns the natural square root of a number
 * @a: a number
 * @b: number of power
 *
 * Return: always 0
 */
int sqrt_a(int a, int b)
{
	if (a * a == b)
	{
		return (b);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	return (sqrt_a(b, a + 1));
}
/**
 * _sqrt_recursion - main - check the code
 * @n: a number
 *
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
