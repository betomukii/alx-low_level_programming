#include "main.h"
/**
 *print-last_digit - prints last digit of a number
 *@i: The integer from which to  extract the last digit
 * Return: The last digit of the input integer
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
