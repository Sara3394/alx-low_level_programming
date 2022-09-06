#include <stdlib.h>
/**
 * malloc_checked - allocates memory with malloc
 * @b: size of buffer
 * Return: pointer to the buffer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
