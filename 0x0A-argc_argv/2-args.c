#include <stdio.h>

/**
 * main - prints all the arguments recieved
 * @argc: no of arguments
 * @argv: recieved arguments
 * Return: 0 if sucessful
 */
int main(int argc, char *argv[])
{
while (argc--)
{
	printf("%s\n", *argv++);
}
	return (0);
}
