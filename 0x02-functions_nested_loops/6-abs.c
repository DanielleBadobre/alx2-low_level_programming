#include "main.h"

/**
 * _abs - Entry point
 * @n: number
 *
 * Description: give the absolute value of an integer
 * Return: the absolute value
 */
int _abs(int n)
{
	int a;
	int abs;

	a = n * -1;
	if (a < 0)
	{
		abs = n;
	} else
	{
		abs = a;
	}
	return (abs);
}
