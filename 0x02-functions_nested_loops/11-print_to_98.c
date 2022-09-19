#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This function prints all natural numbers
 * from n to 98, followed by a new line
 *
 * @n: Starting integer to count down or up to 98
 */

void print_to_98(int n)
{
int a;

if (n < 98)
{
for (a = n; a <= 98; a++)
{
if (a != 98)
printf("%i, ", a);
else
printf("%i", a);
}
}
else if (n > 98)
{
for (a = n; a >= 98; a--)
{
if (a != 98)
printf("%i, ", a);
else
printf("%i", a);
}
}
else
printf("%i", n);

printf("\n");
}
