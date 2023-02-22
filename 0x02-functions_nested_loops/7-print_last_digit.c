#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: number
 *
 * Description: Prints the last digit of an integer
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int l;
	
	if (n < 0)
	{
		l = (n * -1) % 10;
	} else
	{
		l = n % 10;
	}
	_putchar(l);
	return (l);
}
