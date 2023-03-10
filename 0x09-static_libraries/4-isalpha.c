#include "main.h"
/**
 * _isalpha - function that checks for an alphabetic character
 *@c: represents the letters either lower or uppercase
 *
 * Return: 1 if the letter is lowercase or uppercase otherwise return 0
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
