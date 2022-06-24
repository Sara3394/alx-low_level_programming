#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * main - prints the minimum no of coins to make changes
 * for an amount of money
 * @argc: no of arguments
 * @argv: recieved arguments array
 * Return: 0 if sucessful or 1 if Error
 */
int main(int argc, char *argv[])
{
	int num;
	int i;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("\n");
		return (0);
	}

	for (i = 0; i < 5; &&num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++
				num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
