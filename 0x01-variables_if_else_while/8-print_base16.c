#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Always)
 */

int main(void)
{

char hex;

for (hex = '0' ; hex <= '9' ; hex++)
{
	putchar (hex);
}
for (hex = 'a' ; hex <= 'f' ; hex++)
{
putchar (hex);
}
putchar ('\n');
return (0);
}
