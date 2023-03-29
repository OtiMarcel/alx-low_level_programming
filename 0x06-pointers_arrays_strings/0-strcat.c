#include "main.h"
#include <string.h>
/**
*_strcat - function that concatenates two strings
*@src: string 1
*@dest: string 2
*
*Return: a pointer to resulting dest string
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
