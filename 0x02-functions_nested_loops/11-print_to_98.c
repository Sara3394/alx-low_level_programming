#include "main.h"
#include <stdio.h>
/**i
 * print_to_98 - prints all natural no from n to 98
 * @n: input number
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
		n++;
	}
	printf("98\n");
}
