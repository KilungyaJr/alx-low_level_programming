#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order
 * only use the putchar function
 * do not use any variable of type char
 * Return: 0 (success)
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
