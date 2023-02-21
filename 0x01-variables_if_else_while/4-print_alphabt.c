#include <stdio.h>

/**
 * main - main function
 *
 * Description - 'writing the alphabet in lower case except q and e'
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);

}
