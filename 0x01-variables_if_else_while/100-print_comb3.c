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

for (combi1 = '0' ; combi1 < '9' ; combi1++)
{

for (combi2 = combi1 + 1; combi2 <= '9' ; combi2++)
{

if (combi2 != combi1)
{

putchar (combi1);
putchar (combi2);

if (combi1 == '8' && combi2 == '9')
continue;

putchar (',');
putchar (' ');
}}}

putchar ('\n');
return (0);
}
