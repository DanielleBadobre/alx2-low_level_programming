#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = '0';
	while (n < '9')
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n = n + 1;
	}
	putchar('9');
	return (0);
}
