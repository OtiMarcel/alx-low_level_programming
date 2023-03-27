#include "main.h"
/**
*swap_int - swaps the value of an int
*@a: a useless integer
*@b: a useless integer
*Return: void
*
*/
void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
