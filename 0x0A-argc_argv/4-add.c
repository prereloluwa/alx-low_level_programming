#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of this program
 *
 * @argc: (argument count) is an integer that indicates how many arguments were
 * entered on the command line when the program was started
 *
 * @argv: (argument vector) is an array of pointers to arrays of character
 * objects
 *
 * Return: 0 if success, 1 if failed
 */

int main(int argc, char *argv[])
{

	int index1, index2, final_index, add_op = 0;

	for (index1 = 1; index1 < argc; index1++)
	{
		for (index2 = 0; argv[index1][index2] != '\0'; index2++)
		{
			if (argv[index1][index2] < '0' || argv[index1][index2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (final_index = 1; final_index < argc; final_index++)
	{
		add_op += atoi(argv[final_index]);
	}
	printf("%d\n", add_op);
	return (0);
}
