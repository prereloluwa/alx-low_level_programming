#include <stdio.h>

/**
 * main - the function that takes in other function
 *
 * @argc: index of arguments
 * @argv: the arguments passed
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
