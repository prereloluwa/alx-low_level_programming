#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of strings
 * Return: the pointer os
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *os;
	unsigned int sl1, sl2, osl, indx;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (sl1 = 0; s1[sl1] != '\0'; sl1++)
		;

	for (sl2 = 0; s2[sl2] != '\0'; sl2++)
		;

	if (n > sl2)
		n = sl2;

	osl = sl1 + n;

	os = malloc(osl + 1);

	if (os == NULL)
		return (NULL);
	for (indx = 0; indx < osl; indx++)
		if (indx < sl1)
			os[indx] = s1[indx];
		else
			os[indx] = s2[indx - sl1];

				os[indx] = '\0';

	return (os);
}
