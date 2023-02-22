#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints the nine times table
 */
void times_table(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m < 9; m++)
		{
			_putchar((m * n) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar((m * n) + '0');
		_putchar('\n');
	}

}
