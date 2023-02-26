#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check
 *
 * Return: if uppercase, 1
 * else, 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
