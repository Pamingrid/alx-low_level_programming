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
	char *mine;
	mine = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
