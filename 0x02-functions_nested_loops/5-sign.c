#include "main.h"

/**
 * print_sign - Entry point
 * @n: number which signs has to be determined
 *
 * Description: gives the sign of a given number
 * Return: 1 for positive, -1 for negative and 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		_putchar('0');
		return (0);
	}
}
