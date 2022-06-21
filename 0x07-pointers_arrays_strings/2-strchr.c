#include "main.h"
/**
 *  _strchr - a function that locates a character in a string
 *  @s: string to be chekced
 *  @c: character to check for 
 *
 *  Return: pointer to location of c or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*s(s + i) == c)
			return (s + i);
	}
	return (0);
}
