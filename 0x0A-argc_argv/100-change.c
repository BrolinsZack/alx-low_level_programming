#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_coins - counts the minimum number of coins for change
 *
 * @num: the amount of money to make change for
 *
 * Return: the minimum number of coins needed
 */
int count_coins(int num)
{
	int j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	return (result);
}

/**
 * main - prints the minimum number of coins to make change for money
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	result = (count_coins(num));

	printf("%d\n", result);

	return (0);
}

