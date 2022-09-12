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
int poscom;

for (poscom = 48 ; poscom <= 57 ; poscom++)
{
putchar (poscom);
if (poscom != 57)
{
putchar (',');
putchar (' ');
}
}

putchar ('\n');
return (0);
}
