#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the int to be operated uopon
 *
 * Return: returns an unsigned value to calling function
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}

