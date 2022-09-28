#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 * On eror, -1 returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
