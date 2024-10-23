#include "main.h"

/**
 * _islower - checking lowercase letters
 * Description: Write a function that check lowercase letters
 * @i: The character to check
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int i)
{
if (i >= 'a' && i <= 'z')
{
return (1);
}
else
{
return (0);
}
}
