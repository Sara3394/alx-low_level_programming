#include "main.h"

/**
 * swap_int - swaps a and b using their pointers
 * @a: 1st argument int type
 * @b: 2nd argument int type
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
