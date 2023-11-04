#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory.
 * @a: The number of bytes to be allocated.
 *
 * Return: A pointer to allocated memory.
 */
void *malloc_checked(unsigned int a)
{
	void *mem = malloc(a);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}

