#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * then in upper case followed by a new line
 *
 * Return: 0 if success
 */
int main(void)
{
	int char;

	for (char = 'a'; char <= 'z'; char++)
		putchar(char);
	for (char = 'A'; char <= 'Z'; char++)
		putchar(ch);
	putchar('\n');
	return (0);
}
