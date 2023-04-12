#include "main.h"
/**
*sqrt_f1 - solvce for the natural square root of a number
*@x: same integer as n below
*@y: nuber that iterates from 1 to n
*
*Return: 1, -1
*/
int sqrt_f1(int x, int y)
{
	if (y * y == x)
{
	return (y);
}
	else if (y * y > x)
{
	return (-1);
}
	else
{
	return (sqrt_f1(x, y + 1));
}
}
/**
*_sqrt_recursion - calls the resolved natural square root
*@n: input integer
*
*Return: -1( if n does not have a natural root)
*/
int _sqrt_recursion(int n)
{
	return (sqrt_f1(n, 1));
}
