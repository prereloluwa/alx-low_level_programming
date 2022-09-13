#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *
 *Return: 0
 */

int main(void)

{

int combi1;
int combi2;

for (combi1 = 0 ; combi1 <= 98 ; combi1++)
{

for (combi2 = combi1 + 1 ; combi2 <= 99 ; combi2++)
{
putchar ((combi1 / 10) + '0');
putchar ((combi1 % 10) + '0');
putchar (' ');
putchar ((combi2 / 10) + '0');
putchar ((combi2 % 10) + '0');

if (combi1 == 98 && combi2 == 99)
continue;

putchar (',');
putchar (' ');
}}

putchar ('\n');
return (0);
}
