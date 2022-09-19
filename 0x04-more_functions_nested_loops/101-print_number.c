#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 *
 * Return: int n
 */

void print_numbers(int n)
{

	unsigned int a;
	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}

	else
	{

		a = n;
	}

	if (a / 10)
	{

		print_numbers(a / 10);
	}

	_putchar((a % 10) + '0');
}
