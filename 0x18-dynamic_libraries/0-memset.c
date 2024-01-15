#include "main.h"

/**
 * *_memset - function fills with a constant byte.
 * @n: memory to be altered
 * @b: source of the byte that will be used to copy
 * @s: number of times to copy b
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *n, char b, unsigned int s)
{
	unsigned int i;

	for (i = 0; i < s; i++)
	{
		n[i] = b;
	}
	return (n);
}
