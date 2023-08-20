#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0'); // Changed 48 to '0' to print the character '0'
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	// Add a return statement here to handle the case when none of the conditions are met
	return (0);
}
