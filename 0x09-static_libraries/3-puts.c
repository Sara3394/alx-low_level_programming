#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: one char type argument
 * Return: none
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
