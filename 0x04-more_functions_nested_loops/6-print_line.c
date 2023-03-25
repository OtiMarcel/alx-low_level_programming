#include "main.h"
/**
* print_lin - prints a straight line
* @n: single integer dtating num of lines
*
*Return: lines
*/
void print_line(int n)
{
	if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (int i = 0; i < n; i++)
	{
	_putchar('_');
}
	_putchar('\n');
}
}
