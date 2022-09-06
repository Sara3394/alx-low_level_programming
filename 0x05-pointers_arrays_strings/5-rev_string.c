#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char type argument
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, k, tmp, leng;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	leng = i;
	i--;
	while (k < leng / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}
