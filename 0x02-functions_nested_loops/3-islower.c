#include "main.h"
/**
 * _islower - checks if a letter is lowercase
 * @c: letter to check
 *
 * Return: 1 if success 0 otherwise
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
