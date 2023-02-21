#include <stdio.h>

/**
 * main - main function
 *
 * description - 'print all single digital numbers of base ten'
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);

}
