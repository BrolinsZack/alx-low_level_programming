#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("size of a chart: %lu byte(s)", sizeof(char), '\n');
	printf("size of int: %lu byte(s)", sizeof(int), '\n');
	printf("size of a long int: %lu byte(s)", sizeof(long int), '\n');
	printf("size of a long long int: %lu byte(s)", sizeof(long long int), '\n');
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);

}
