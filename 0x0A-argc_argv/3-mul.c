#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function to print the result of the multiplication, followed by a
 * new line
 * @argc: the index of arguments passed
 * @argv: the arguments passted
 *Return: 0
 */

int main(int argc, char *argv[])
{

	int mult;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);

return (0);
}
