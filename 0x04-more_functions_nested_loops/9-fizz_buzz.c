#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The “Fizz-Buzz test”
 *
 * Return: void
 *
 */

int main(void)
{

int a;

for (a = 1 ; a <= 100 ; a++)
{

if (a % 3 == 0 && a % 5 != 0)
{ printf("Fizz");
}

else if (a % 3 == 0 && a % 5 == 0)
{ printf("FizzBuzz");
}
else if (a % 3 != 0 && a % 5 == 0)
{ printf("Buzz");
}
else if (a == 1)
{ printf("%d", a);
}
else
{ printf("%d", a);
} printf(" ");

} printf("\n");

return (0);
}
