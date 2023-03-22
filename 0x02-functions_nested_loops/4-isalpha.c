#include "main.h"
/**
 * _isaplha - checks for alphabetic character
 * @c: is the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 95))
		return (1);
	else
		return (0);
}
