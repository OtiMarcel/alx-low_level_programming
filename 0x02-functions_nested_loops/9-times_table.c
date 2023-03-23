#include "main.h"
/**
* times_table - prints a multiplication table of 9
*
* return: void
*/
void times_table(void)
{
	int number, occurance, product;

	for (number = 0; number <= 9; number++)
{
	_putchar('0');

	for (occurance = 1; occurance < 10; occurance++)
{
	_putchar(',');
	_putchar(' ');

	product = number * occurance;

	if (product <= 9)
	_putchar(' ');

	else
	_putchar((product / 10) + '0');

	_putchar((product % 10) + '0');
}
	_putchar('\n');
}
}
