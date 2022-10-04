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

	int cent, index, focus;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	focus = atoi(argv[1]);
	cent = 0;

	if (focus < 0)
	{
		printf("0\n");
	}

	for (index = 0; index < 5 && focus >= 0; index++)
	{
		while (focus >= coins[index])
		{
			cent++;

			/*focus = focus - coins[index]*/
			focus -= coins[index];
		}
	}
	printf("%d\n", cent);
	return (0);
}
