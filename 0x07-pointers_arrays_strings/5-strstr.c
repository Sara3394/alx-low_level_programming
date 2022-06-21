#include "main.h"

/**
 * _strstr - function that locates substring
 * @haystack: string in which needle is checked in
 * @needle: substring to find in haystack
 *
 * Return: pointer to beinning of needle 
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
