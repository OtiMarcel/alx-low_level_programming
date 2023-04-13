#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strcpy - copy string from one pointer
* to another
*@dest: a variable the copied string is
*pointe to
*@src: the pointer to copied string
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
