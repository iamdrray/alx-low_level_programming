#include<stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *@dest: parameter 1
 *@src: parameter
 *Return: non
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int x = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; x < a ; x++)
	{
		dest[x] = src[x];
	}
	dest[a] = '\0';
	return (dest);
}
