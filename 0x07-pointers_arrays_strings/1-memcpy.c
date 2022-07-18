#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @n: bytes from memory area
 * @src: to memory area
 * @dest: a pointer to
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
