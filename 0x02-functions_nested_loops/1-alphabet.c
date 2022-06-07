#include "main.h"
/**
 * main - main prints all the alphabets in small letter
 *followed by a new line 
 *
 * Return: 0 if success
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

