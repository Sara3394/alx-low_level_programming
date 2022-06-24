#include "main.h"

/**
 * _strlen - function that returns length of string
 * @s: char type pointer
 *
 * Return: returns string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
