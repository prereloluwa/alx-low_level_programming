#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: char pointer to a function name
 * @f: woid pointer to a function f
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
