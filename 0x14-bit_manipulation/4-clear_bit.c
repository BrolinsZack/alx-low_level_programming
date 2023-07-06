#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @n: the range
 * @index: the index to set to
 * Return: status code 1 0r 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 7)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
