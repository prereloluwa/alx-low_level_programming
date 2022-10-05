#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int a, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (a = 0; a < ac; a++)
	{
		for (j = 0; av[a][j] != '\0'; j++)
		{
			str[k] = av[a][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
