#include "main.h"

/**
 * _isalpha.c - Checks for alphabetic chracter
 * @c: The character to be checked
 * Return: 1 for alphabetic chracter or 0 for anything else 
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
