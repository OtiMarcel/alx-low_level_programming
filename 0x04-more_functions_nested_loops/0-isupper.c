#include "main.h"
/**
* _isupper - checks for uppercase
*@c: single input 
* Return: 1 (Success) or 0 (not successful)
*/
int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);
}
