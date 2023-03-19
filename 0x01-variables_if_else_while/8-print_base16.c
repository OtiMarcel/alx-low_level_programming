#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry
*
* Return: 0 (Success)
*/
int main(void)
{
	int a;
	char ch;

	for (a = 0; a < 10; a++)
	putchar('0' + a);

	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
