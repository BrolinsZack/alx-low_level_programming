#include "main.h"

/**
 * print_line -  drawing a straight line in the terminal
 * @n: integer params
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(95);
	}
}
