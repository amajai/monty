#include <stdio.h>
#include "monty.h"

/**
 * check_num - Check if a string is a number.
 * @s: string to check
 *
 * Return: 0 if true
 * 1 if false.
 */
int check_num(char *s)
{
	int i = 0;

	if (s[i] == '-' || (s[i] >= '0' && s[i] <= '9'))
	{
		i++;
		while (s[i] != '\0')
		{
			if (s[i] < '0' || s[i] > '9')
			{
				return (1);
			}
			i++;
		}
		return (0);
	}
}
