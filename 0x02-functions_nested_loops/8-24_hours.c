#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: gives the time in Jack Bauer day
 */
void jack_bauer(void)
{
	int j;
	int i;

	for (j = 0; j <= 23; j++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
