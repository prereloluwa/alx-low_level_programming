#include "main.h"

/**
 * jack_bauer - this function prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{

	int a, b, c, d;
	int e, f;

	for (e = 0; e <= 23; e++)
	{

		for (f = 0; f <= 59; f++)
		{

			a = (e / 10) + '0';
			b = (e % 10) + '0';
			c = (f / 10) + '0';
			d = (f % 10) + '0';
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			_putchar('\n');
		}
	}
}
