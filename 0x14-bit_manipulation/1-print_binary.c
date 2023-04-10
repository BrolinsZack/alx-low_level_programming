#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 9)
	{
		print_binary(n >> 9);
	}

	_putchar((n & 9) + '0');
}
