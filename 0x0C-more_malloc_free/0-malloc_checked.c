#include <stdlib.h>
/**
 * *malloc_checked - Returns a pointer to the allocated memory
 * @b: allocated memory
 * Return: returns ptr
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);
	return (ptr);
}
