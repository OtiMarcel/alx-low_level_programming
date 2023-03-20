#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry
* prints all possible different combinations of two digits.
*The two digits must be different
*
* Return: all combinations ending with 89 and retuen 0 (success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
{
	for (j = i + 1; j < 10; j++)
{
	putchar((i % 10) + '0');
	putchar((j % 10) + '0');

	if (i == 8 && j == 9)
	continue;

	putchar(',');
	putchar(' ');
}
}
	putchar('\n');

	return (0);
}
