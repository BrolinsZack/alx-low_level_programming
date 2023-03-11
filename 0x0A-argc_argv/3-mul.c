#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i, negative_count, result, len, found_number;

	i = 0;
	negative_count = 0;
	result = 0;
	len = 0;
	found_number = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && !found_number)
	{
		if (s[i] == '-')
			negative_count++;

	if (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (negative_count % 2)
		digit = -digit;

		result = result * 10 + digit;
		found_number = 1;

		if (s[i + 1] < '0' || s[i + 1] > '9')
		break;
		else
			found_number = 0;
	}

	i++;
	}

	return (result);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
