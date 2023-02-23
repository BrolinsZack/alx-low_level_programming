#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @i: function parameter
 *
 * Return: always r
 *
 */

int print_last_digit(int i)
{
	int r;

	r = 1 % 10;

	if (i < 10)
		r = -r;

	_putchar (r + '0');
	return (r);
}
