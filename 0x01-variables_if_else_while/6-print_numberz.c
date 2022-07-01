#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * not allowed to use any variable of type char
 * only use the putchar function
 * Return: 0 (success)
 */
int main(void)
{
int i = '0';

while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
