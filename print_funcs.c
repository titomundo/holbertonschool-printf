#include "main.h"

/**
* ptr_char - prints a character
* @c: input char
*
* Return: int 
*/
int ptr_char(char c)
{
	return (write(1, &c, 1));
}

/**
* ptr_str - prints a string 
* @c: input string 
*
* Return: int 
*/
int ptr_str(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		ptr_char(s[i]);
		i++;
	}

	return (i);
}
