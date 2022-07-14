#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an array of integer
 * @n: the number of integer in the array
 */
void reverse_array(int *a, int n)
{
	int n;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
