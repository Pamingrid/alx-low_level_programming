#include <stdio.h>
#include "main.h"

/**
 * main - Print the programs name, followed by a newline
 * @argc: Count of arguments
 * @argv: array of pointers to strings passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
