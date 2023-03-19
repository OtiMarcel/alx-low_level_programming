#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry
*
* Return: 0 (success)
*/
int main(void)
{
	int  n;

	for (n = 0; n <= 9; n++)
{
	putchar('0' + n);

	if (n == 9)
	continue;

	putchar(',');
	putchar(' ');
}
	putchar('\n');

	return (0);
}
