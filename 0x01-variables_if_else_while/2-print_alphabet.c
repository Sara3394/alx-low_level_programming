#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * followed by a new line
 *
 * Return: 0 if success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
