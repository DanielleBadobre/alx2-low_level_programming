#include "main.h"
#include <limits.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description - incremnts and print letters
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
