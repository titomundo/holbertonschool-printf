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
	char *nilcase = "(null)";

	if (s == NULL) {
		for (i = 0; i < 6; i++)
			ptr_char(nilcase[i]);

		return (6);
	}

	while (s[i] != '\0')
	{
		ptr_char(s[i]);
		i++;
	}

	return (i);
}
