#include <stdio.h>
#include <unistd.h>

/**
 * main - prints "and that piece of art is useful"
 * -Dora Korpar, 2015-10-19",followed by new line
 *  Return: 0 on sucess
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
i	return (1);
}
