#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * followed by a new line
 * for multiples of three prit "fizz" instead
 * print "buzz" for multiples of five
 * print "fizzbuzz" for multiples of both
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}

