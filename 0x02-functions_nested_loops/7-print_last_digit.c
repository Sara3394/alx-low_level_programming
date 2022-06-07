#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 * @n: number whose last digit is being printed
 *
 * Return: 1
 */
int print_last_digit(int n)

{
	int a;
	int b;

	a = n % 10;
	if (a < 0)
		a = -a;
	b = '0' + a;
	_putchar(b);
	return (1);
}
