#include "main.h"
/**
* factorial - prints the factorial of an integer
*@n: input integer
*
*@Return: -1 (if lesser than 0), 1 (if 0)
*/
int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}
	else if (n == 0)
{
	return (1);
}
	else
{
	return (n * factorial(n - 1));
}
}
