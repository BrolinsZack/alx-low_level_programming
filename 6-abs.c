include "main.h"
#include <unistd.h>

/**
 * _abs - checks for an absolute value
 * @b: parameter
 * Return: absolute value of a number
 */

int _abs(int b)
{
	if (b < 0)
		b = -b;
	return (b);
}
