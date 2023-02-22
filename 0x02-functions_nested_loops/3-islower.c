#include "main.h"

/**
 *_islower - function that checks lower case character
 *
 *@c: is the character to be checked
 *
 *Return: 1 if the case of of a lower case otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}


