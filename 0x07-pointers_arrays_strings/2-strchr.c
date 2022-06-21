#include "main.h"
/**
 *  _strchrn- locates a character in a string
 *  @s: string to check
 *  @c: character in a string to check
 *
 *  Return: pointer to spot where c is located or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; *(s + i); i++)
	{
if (*(s + i) == c)
	return (s + i);
	}
	return (0);
}
