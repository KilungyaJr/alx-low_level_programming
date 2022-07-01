#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * prints all the letters except q and e
 * Return: 0 (success)
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
