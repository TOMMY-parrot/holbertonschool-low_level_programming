#include "main.h"
/**
 * cap_string - capitalize all words in a string
 * @str: input string
 * Return: no need
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char sep[13] = {' ', '	', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		while (j < 13)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (i == 0 || str[i - 1] == sep[j])
				{
					str[i] = str[i] - 32;
				}
			}
			j = j + 1;
		}
		j = 0;
		i = i + 1;
	}
	return (str);
}

