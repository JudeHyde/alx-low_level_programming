#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - This returns absolute
 * @n: Operand for checking
 *
 * Description: Programm to return absolute value of an integer
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int digit = n % 10;

		if (n < 0)
		{
			digit = digit * -1;
		}
	_putchar(digit + '0');


	return (digit);
}

