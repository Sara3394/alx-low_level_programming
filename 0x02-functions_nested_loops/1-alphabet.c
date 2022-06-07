#include "main.h"
/**
 * print_alphabet - main prints all the alphabets in small letter
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar (c);
	}
	_putchar('\n');
}

