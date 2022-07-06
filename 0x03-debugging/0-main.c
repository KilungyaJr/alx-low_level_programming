#include "main.h"

/**
 * main - checks whether number is positive, negative, or zero
 * @i: number to be checked
 */
void positive_or_negative(int i)
{
printf("Enter a number: ");
  
if (i < 0)
printf("%d is negative\n", i);
else if (i > 0)
printf("%d is positive\n", i);
else
printf("%d is zero\n", i);
}
