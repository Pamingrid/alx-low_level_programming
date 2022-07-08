#include "main.h"
/**
 * print_square - print a square
 * @n: size of square number
 * Description: use _putcharto print and '#' to print square
 */
void print_square(int n)
{
	int x, y;

	y = 0;

	if (n < 1)
		_putchar('\n');

	while (y < n)
	{
		x = 0;
		while (x < n)
		{
			_putchar('#');
			x++;
		}
			_putchar('\n');
			y++;
	}
}
