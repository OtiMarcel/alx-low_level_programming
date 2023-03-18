#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry
*
* Return: a to z (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
