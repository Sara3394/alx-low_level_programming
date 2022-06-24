#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - checks for uppercase character
 * @c: char variable
 * Return: 1 for uppercase and 0 otherwise
=======
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
>>>>>>> 9d12fb7e78c8a549d31716be4d96eb8ec4f4280b
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
