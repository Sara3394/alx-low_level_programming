#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to te buffer
 */
char *_strdup(char *str)
{
	char *pt;
	unsigned int l, i;

	if (str == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
		l++;
			if (l < 1)
				return (NULL);
	pt = malloc(l * sizeof(char));
	if (pt == NULL)
	{
		free(pt);
		return (NULL);

		for (i = 0; i < l; i++)
			pt[i] = str[i];
		pt[i] = '\0';
		return (pt);
	}
