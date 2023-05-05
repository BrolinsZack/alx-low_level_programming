#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit else
 * Otherwise: -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 7))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
