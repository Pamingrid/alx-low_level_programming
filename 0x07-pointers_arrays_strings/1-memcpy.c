nclude "main.h"
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
	int i = n;
	int r = 0;
	for (; r < i; r++)
	{
		dest[i] = scr[i];
		n--;
	}
	return (dest);
}
