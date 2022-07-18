#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: bytes in the initial segment
 * @accept: consist only of bytes
 *
 * Return: return n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
