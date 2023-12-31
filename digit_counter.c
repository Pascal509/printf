#include "main.h"

/**
 * digit_counter - Counts the number
 * of digits that makes up a number
 * @num: The number to count its digits
 * Return: Number of digits that make up a number
 */

int digit_counter(int num)
{
	if (num <= 9)
	{
		return (1);
	}
	else if (num > 9)
	{
		return (1 + digit_counter(num / 10));
	}
	return (0);
}
