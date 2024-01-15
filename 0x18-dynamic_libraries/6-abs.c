#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @n: parameter to be checked
 * Return: Always a
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
