#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @str1: first string being compared
 * @str2: second string to be compared against
 *
 * Return: 1 if they are the same 0 otherwise
 */
int wildcmp(char *str1, char *str2)
{
	if (*str1 == '\0' && *str2 == '\0')
		return (1);
	if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));
	if (*str2 == '*')
	{
		if (*(str2 + 1) == '*')
			return (wildcmp(str1, str2 + 1));
		if (wildcmp(str1 + 1, str2) || wildcmp(str1, str2 + 1))
			return (1);
	}
	return (0);
}
