#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry
*
*Return: output 0 (Success)
*/
int main(void)
{
	char ch, ch_1;

	for (ch = 'a', ch_1 = 'A'; ch <= 'z' && ch_1 <= 'Z'; ch++, ch_1++)
	{
	putchar(ch);
	putchar(ch_1);
	}
	return (0);
}
