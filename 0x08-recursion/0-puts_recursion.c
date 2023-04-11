#include "main.h"
/**
*puts_recussion - prints a string
*@s: string to be printed
*
*Retuirn: void
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
{
	_putchar('\n');
}
	else
{
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
}
