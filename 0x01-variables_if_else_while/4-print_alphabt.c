#include <stdio.h>
/**
 * main - prints alphabets in lower case except q and e
 * followed by a new line
 *
 * Return: 0 if success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
