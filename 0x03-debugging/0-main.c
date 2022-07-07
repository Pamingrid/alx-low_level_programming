#include "main.h"
/**
 * main - test the function negative or positive
 * Description: the variable i will return a value
 * Return: 0
 */
int main(void)
{
	int n = 98;

srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 98)
	printf("%d is positive\n", n);
else if (n == 98)
	printf("%d is zero\n", n);
else if (n < 98)
	printf("%d is negative\n", n);

	return (0);
}
