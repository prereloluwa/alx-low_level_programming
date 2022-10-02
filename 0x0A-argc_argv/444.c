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

	int final_index, a, b, add_op = 0;

	for (final_index = 1; final_index < argc; final_index++)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[b][a] != '\0'; b++)
			{
				if (argv[b][a] < '0' || argv[b][a] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		add_op += atoi(argv[final_index]);
	}
	printf("%d\n", add_op);

return (0);
}
