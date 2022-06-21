#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates substring
 * @haystack: string in which needle is checked in
 * @needle: substring to find in haystack
 *
 * Return: pointer to beinning of needle 
 */
char *_strstr(char *haystack, char *needle)
{ 
	int i,j;
	
	for (i = 0; haystack[i] != '\0'; i++
	     {
		     for (j = 0; needle[i + j] != needle[j])
			     break;
		     
	     }
	     if (!needle[j])
	     return (&haystack[i]);
	     }
	     return(NULL);
	     }
