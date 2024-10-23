#include "main.h"

/**
 * _isalpha - checking lowercase characters
 * Description: Write a function that check lowercase characters
 * @c: The character to check
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
