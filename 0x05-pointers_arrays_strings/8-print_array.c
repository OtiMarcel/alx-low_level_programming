#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_array - display the content of an array
*@a: an input sting
*@: number of elements of the array
*
*Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);

	if (i < n)
{
	printf(",");
	printf(" ");
}
	else
	continue;
}
	printf("\n");
}
