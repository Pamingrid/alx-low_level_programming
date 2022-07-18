#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @n: bytes from memory area
 * @src: to memory area
 * @dest: a pointer to
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = n;
	int i = 0;

	while (i < n)
	{
		dest[i] = scr[i];
		i++;
	}
	return (dest);
}
