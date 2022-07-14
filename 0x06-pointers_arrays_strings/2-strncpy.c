#include "mai.h"
/**
 * _strncpy - function that copies a string
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will be changed
 * @n: value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < 0)
	{
		dest[a] = '\0';
		a++;
	}

return (dest);
}
