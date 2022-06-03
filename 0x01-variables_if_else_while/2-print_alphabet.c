#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * followed by a new line
 *
 * Return: 0 if success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		}
	putchar('\n');
	return (0);
}
