#include "function_pointers.h"

/**
 * int_index - is a function that searches for an integer and returns the index
 * of the first element for which the cmp function does not return 0
 * @array: array of integers
 * @size: is the number of elements in the array `array`
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index of the first element that matches with `cmp`
 * -1 if none found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1  || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
