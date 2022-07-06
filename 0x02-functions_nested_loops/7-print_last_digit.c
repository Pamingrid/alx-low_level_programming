#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: an integer input
 * Description: this function print the last digit of a number
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
		int last_digit = ((n < 0 ? -1 : 1) * n) % 10;

			_putchar('0' + last_digit);
				return (last_digit);
}
