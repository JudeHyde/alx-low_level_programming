#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - This checks for case
 * @c: Operand for checking
 *
 * Description: Programm to chack alphabets casing
 *
 * Return: Always 0 (Success)
 */

	int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

