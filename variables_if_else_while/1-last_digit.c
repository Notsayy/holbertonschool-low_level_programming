#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Point
*
* Description: Print whether the variable n is positive or negative.
* Return: Always 0 if Success.
*/
int main(void)
{
int n;
int last_digit
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % (10);
if (last_digit < (5)
{
printf("%last_digit and is greater than 5\n", n);
}
else if (last_digit == 0)
{
printf("%last_digit and is 0\n", n);
}
else
{
printf("%last_digit and is less than 6 and not 0\n", n);
}

return (0);
}
