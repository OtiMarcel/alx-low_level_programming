#include "main.h"
/**
*prime_number - solves for prime
*@x: same as n
*@y: integer to be iterated
*Return: 1 or 0
*/
int prime_number(int x, int y)
{
	if (y == 1)
{
	return (1);
}
	else if (x % y == 0 && y > 0)
{
	return (0);
}
	else
{
	return (prime_number(x, y - 1));
}
}

/**
*is_prime_number - prints 1 if prime and 0 if not
*@n: integer to be check
*
*Return: 1 0r 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (prime_number(n, n - 1));
}
