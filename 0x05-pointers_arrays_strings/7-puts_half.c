#include "main.h"
#include <string.h>
/**
*puts_half - prints out half of a string
*@str: input string
*
* Return: void
*/
void puts_half(char *str)
{
	int n, i, length_of_the_string;

	length_of_the_string = strlen(str);

	if ((length_of_the_string % 2) == 1)
{

	n = (length_of_the_string - 1) / 2;
}

	else
{
	n = length_of_the_string / 2;
}

	for (i = n; i < length_of_the_string; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
