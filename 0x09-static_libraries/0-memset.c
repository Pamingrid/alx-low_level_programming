#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte
 * @n: number of bytes of memory area to fill
 * @s: bytes of the memory area pointed
 * @b: constant byte
 *
 * Return:a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
