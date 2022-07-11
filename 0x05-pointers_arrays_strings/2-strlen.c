#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
int i;

i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
