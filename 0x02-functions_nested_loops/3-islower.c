#include "main.h"

/**
 * _islower - Entry point
 * @c: The character to check
 *
 * Description: checks if the character is lowercase or not
 * Return: On success 1, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
