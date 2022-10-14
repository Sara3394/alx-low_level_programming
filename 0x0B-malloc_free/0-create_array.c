#include <stdlib.h>
/**
 * create_array - creates and intializes an array of chars
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i;

	if (size > 0)
	{
		pt = malloc(size * sizeof(char));
		if (pt == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		pt[i] = c;
	return (pt);
}
