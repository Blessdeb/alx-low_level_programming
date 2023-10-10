#include "main.h"

/**
 * main - Entry point
 *
 * Decription: Prints without input or output
 *
 * Return: 0
*/

int main(void)
{
	char *str = "_putchar";

	while (*str != '\0')
	_putchar(*str++);
	_putchar('\n');

	return (0);
}

