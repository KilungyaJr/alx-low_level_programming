#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * not allowed to use any variable of type char
 * only use the putchar function
 * Return: 0 (success)
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
