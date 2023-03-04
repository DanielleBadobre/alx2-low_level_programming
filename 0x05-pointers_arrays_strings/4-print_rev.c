#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	while (n >= 0)
	{
		_putchar(s[n - 1]);
		n--;
	}
	_putchar('\n');
}
