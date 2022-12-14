#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determines if a number is positive or negative or zero
 *
 * Description: program randoms a number and runs the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
