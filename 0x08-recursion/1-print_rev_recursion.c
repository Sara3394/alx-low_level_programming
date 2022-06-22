#include "main.h"

/**
 *  _print_rev_recursion - function that reverse and print a string
 *  @s: pointer of char type
 *
 *  Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + l);
		_putchar(*s);
	}
}
