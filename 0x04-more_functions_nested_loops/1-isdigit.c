#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: if digit, 1
 * else 0
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
