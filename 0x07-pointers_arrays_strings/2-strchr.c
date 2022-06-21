#include "main.h"

/**
 *  _strchr - a function that locates a character in a string
 *   @s: string to check
 *   @c: character to locate
 *   Return: character found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] == c)
	{
		return (s + i);
	}
	s++;
	return (0);
}
