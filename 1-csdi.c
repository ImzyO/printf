#include "main.h"
#include <stdio.h>

/**
 * temp_i - prints integer
 * @i: integers to be printed
 *
 * Return: i
 */

int temp_i(int i)
{
	int i = 0;

	if (i < 3)
	{
		printf("i is not more than three for sure\n");
	}
	else
	{
		printf("i is more than three for sure\n");
	}
	printf("The actual value of i is: %i\n", i);
}

/**
 * temp_d - prints integer
 * @d: integer to be printed
 *
 * Return: integer
 */

int temp_d(int d)
{
	int d = 1;

	while (d <= 1)
	{
		printf("Yes, d is less than 1 or equal to\n");
	}
	printf("This is the value of d: %d\n", d);
}
