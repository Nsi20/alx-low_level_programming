nclude "main.h"

/**
 * swap_int - functions that swaps the varibles values
 * @a: 1st Pointer
 * @a: 2nd Pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
