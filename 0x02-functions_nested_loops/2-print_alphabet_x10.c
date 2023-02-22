#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int alphabet;
	char ch;

	alphabet = 1;
	while (alphabet <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		alphabet++;
	}
}
