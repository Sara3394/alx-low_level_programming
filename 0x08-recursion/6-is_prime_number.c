#include <stdio.h>

/**
 * checker - checks if the input number is prime recursively
 * @n: counter
 * @num: base number to check
 *
 * Return: 1 if n is a prime, 0 otherwise
 */
int checker(int n, int num)
{
	if (num % n == 0 || num < 2)
		return (0);
	else if (n == num - 1)
		return (1);
	else if (num > n)
		return (checker(n + 1, num));
	return (1);
}
/**
 * is_prime_number - checks if the number is prime
 * @n: the number to check
 * Return: 1 if n is a prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (checker(2, n));
}
