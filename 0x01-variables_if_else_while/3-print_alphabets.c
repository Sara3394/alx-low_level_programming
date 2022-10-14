#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * then in upper case followed by a new line
 *
 * Return: 0 if success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
