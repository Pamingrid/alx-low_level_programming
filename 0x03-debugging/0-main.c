#include "main.h"
/**
 * main - test the function negative or positive
 * Description: the variable i will return a value
 * Return: 0
 */
int main(void)
{
	int i;

srand(time(0));

i = rand() - RAND_MAX / 2;

i = 98;

	positive_or_negative(i);

	return (0);
}
