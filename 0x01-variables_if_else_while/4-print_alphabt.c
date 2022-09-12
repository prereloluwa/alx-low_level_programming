#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Always)
 */

int main(void)

{
char a2z;

for (a2z = 'a' ; a2z <= 'd' ; a2z++)
{
putchar (a2z);
}

for (a2z = 'f' ; a2z <= 'p' ; a2z++)
{
putchar (a2z);
}

for (a2z = 'r' ; a2z <= 'z' ; a2z++)
{
putchar (a2z);
}

{
putchar ('\n');
}

return (0);
}
