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

for (a2z = 'a' ; a2z <= 'z' ; a2z++)
if (a2z != 'e' && a2z != 'q')
{
putchar (a2z);
}

{
putchar ('\n');
}

return (0);
}
