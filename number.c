#include "main.h"
/**
 * check_if_numeric - checks if the input string is a valid number or not
 *@str: string that will convert to an integer
 *Return: 0 or 1
 */

int check_if_numeric(const char *str)
{
	int i = 0;

	if (str == NULL || *str == '\0')
		return (0);

	if (str[i] == '-')
		i++; /* Allowing negative numbers*/

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
