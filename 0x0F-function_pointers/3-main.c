#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int (*g)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	g = get_op_func(argv[2]);
	if (g == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", g(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
