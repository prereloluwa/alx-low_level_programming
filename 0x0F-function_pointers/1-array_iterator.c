#include "function_pointers.h"
/**
 * array_iterator - is a function that executes a function given as a
 * parameter on each element of an array
 * @array: input integer array
 * @size: is the size of the array
 * @action: is a pointer to the function needed to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
