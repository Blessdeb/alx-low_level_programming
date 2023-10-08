#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase as requested
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}

