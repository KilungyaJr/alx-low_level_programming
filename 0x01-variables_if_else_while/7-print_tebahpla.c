#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * only use the putchar function
 * Return: 0 (success)
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
