#include "main.h"

/**
 * puts2 - prints xters of a string
 * @str: the used string reference
 * Return: 0
 */
void puts2(char *str)

{
	int i, x;
i = 0;
x = 0;
        while (str[i++])
	{
		x++;
	}
for (i = 0; i < x; i += 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}
