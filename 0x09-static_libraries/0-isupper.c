#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @x: print int
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
