#include <stdio.h>
/**
 * main - prints alphabets in lower case followed by new line
 *
 * Return: 0 if success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
