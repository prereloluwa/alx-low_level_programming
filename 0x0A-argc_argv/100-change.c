#include  <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change for
 * an amount of money
 * @argc: argument's counter
 * @argv: argument's value
 * Return: 1 for Error, 0 for success
 */

int main(int argc, char *argv[])
{
	int cents = 0, index, focus;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	focus = atoi(argv[1]);

	if (focus < 0)
	{
		printf("0\n");
		return (0);
	}

	for (index = 0; index < 5 && focus >= 0; index++)
	{
		while (focus >= coins[index])
		{
			cents++;

			focus -= coins[index];
		}
	}
	printf("%d\n", cents);
	return (0);
}
