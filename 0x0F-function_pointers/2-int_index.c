#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @size: the number of elements in the array
 * @array: an array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: noting
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}