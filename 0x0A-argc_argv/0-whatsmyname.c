#include <stdio.h>

/**
 * main - function that prints the name of the file
 * @argc: counts arguments
 * @argv: argument strings array
 * Return: 0 if succesfull
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
