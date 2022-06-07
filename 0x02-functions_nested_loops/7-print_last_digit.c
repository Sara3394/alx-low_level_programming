#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 * @n: number whose last digit is being printed
 *
 * Return: 1
 */
int print_last_digit(int n)

{
	int b;
	int n;

	if (n < 0)
		n = -n;
	b = n % 10;
	if (b < 0)
		b = -b;
	_putchar(b);
	return (1);
}
