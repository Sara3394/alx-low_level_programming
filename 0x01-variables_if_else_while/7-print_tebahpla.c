#include <stdio.h>
/**
 * main - prints the lower case alphabets
 * in reverse order followed by a newline
 *
 * Return: 0 if success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
