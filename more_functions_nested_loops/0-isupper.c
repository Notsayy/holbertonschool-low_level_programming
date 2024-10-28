#include "main.h"

/**
 * _isupper - checking upercase characters
 * Description: Write a function that check upercase characters
 * @c: The character to check
 * Return: 1 if the character is upercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
