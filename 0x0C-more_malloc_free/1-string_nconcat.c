#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of second string to copy
 *
 * Return: pointer to allocated new place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (m = 0; m < i; m++)
		s[m] = s1[m];
	for (m = 0; m < j; m++)
		s[m + i] = s2[m];
	s[i + j] = '\0';
	return (s);
}
