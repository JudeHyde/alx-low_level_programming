#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers under 98
 *
 * @n: integer
 *
 * Description: Prints all numbers under 98
 *
 * Return: always 0 (Success)
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
			printf("%d\n", n);
		}
	
	}
	else
	{
		while (n <= 98)
		{
			printf("%d, ", n++);
			printf("%d\n", n);
		}
	}
}