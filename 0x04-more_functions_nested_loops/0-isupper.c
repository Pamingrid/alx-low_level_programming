#include "main.h"
/**
 * _isupper - check if character is lower case
 * @c: character to be checked
 * Return: 1 if lowercase 0 otherwise
 */
int _isupper(int c)
{
		return ('64' < c && c < '91' ? 1 : 0);
}
