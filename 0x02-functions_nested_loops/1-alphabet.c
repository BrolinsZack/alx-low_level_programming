#include "main.h"

/**
 * main - main function
 *
 * description - 'print all alphabets in lower case'
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
