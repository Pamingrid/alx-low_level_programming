#include "main.h"
/**
 * main - print alphabet
 * Description: print alphabet in lower case
 *
 * Return:(0)
 *
 */

void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
	return (0);
}
