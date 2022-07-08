#include "main.h"
/**
 * print_square - print a square
 * @size: size of square number
 * Description: use _putcharto print and '#' to print square
 */
void print_square(int n)
{
	int x, y;
	y = 0;
	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
			_putchar('\n');
			y++;
	}
