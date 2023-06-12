#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * ON ERROR, -1 IS returned and error is set appropriately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
