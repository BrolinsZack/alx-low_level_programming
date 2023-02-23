#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @b: the int to extract last digit
 *
 * Return: value of the last digit
 *
 */

int print_last_digit(int b)
{
	int x;

	x = b % 10;
	if (b < 0)
		x = -x;

	_putchar(x + '0');
	
	return (x);
}
