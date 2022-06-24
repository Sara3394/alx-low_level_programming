#include <stdio.h>

/**
 * main - prints no of recieved arguments
 * @argc: counts argument
 * @argv: argument strings array
 * Return: 0 if sucessful
 */
int main(int argc, char *argv[__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
