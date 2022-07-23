#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if lowercase 0 otherwise
 */
int _isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ? 1 : 0);
}
