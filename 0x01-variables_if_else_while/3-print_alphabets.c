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

char a2z;
char A2Z;

for (a2z = 'a' ; a2z <= 'z' ; a2z++)
{
putchar (a2z);
}

for (A2Z = 'A' ; A2Z <= 'Z' ; A2Z++)
{
putchar (A2Z);
}

{
putchar ('\n');
}

return (0);
}
