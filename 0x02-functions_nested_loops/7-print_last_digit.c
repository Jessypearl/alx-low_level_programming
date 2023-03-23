#include "main.h"

/**
 * prints_last_digit - function that prints the last digit
 *
 * @i: function parameter
 *
 * Return: Always return x.
 */
int Print_last_digit(int i)
{
	int x;
	
	x = i % 10;
	if  (i < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
