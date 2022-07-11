#include "main.h"

/**
 * puts_half - prints half of a string
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: string to print the characters from
 */
void puts_half(char *str)
{
int len, n, i;

len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}

}
_putchar('\n');
}
