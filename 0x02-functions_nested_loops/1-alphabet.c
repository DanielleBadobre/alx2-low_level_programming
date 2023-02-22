#include "main.h"
#include <limits.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * @letter: alphabet character to print
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
