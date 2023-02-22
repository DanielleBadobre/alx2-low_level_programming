#include "main.h"

/**
 * _isalpha - Entry point
 * @c: character to check
 *
 * Description: checks wether a character is alphabetical
 * Return: On sucess 1, on fail, 0
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	return (0);
}
