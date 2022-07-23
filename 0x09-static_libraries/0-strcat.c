#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will also be changed
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}
	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
