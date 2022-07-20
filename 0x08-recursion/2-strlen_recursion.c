#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: a character of the string 
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
