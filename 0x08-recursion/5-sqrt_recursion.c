#include "main.h"

/**
 * counter - function with two argument
 * @root: int type first argument
 * @n: int type second argument
 *
 * Return: root value
 */
int counter(int root, int n)
{
	if (n == (root * root))
		return (root);
	else if (root == n || root == -n)
		return (-1);
	else
		return (counter(root + 1, n));
}

/**
 * _sqrt_recursion - function that returns the natural square root
 * @n: int type argument
 * Return: value of n
 */
int _sqrt_recursion(int n)
{
	return (counter(0, n));
}
