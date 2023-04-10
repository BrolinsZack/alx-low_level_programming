#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index to set value of the bit to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 7))
			return (-1);

	*n ^= (1 << index);

	return (1);
}
