# include "main.h"
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

/**
 * check_argv_digit - check each digit of argv[] for number or not
 * @digits: input parameter
 * Return: 0 if is number; otherwise 1
 */
int check_argv_digit(char *digits)
{
	int n;

	n = 0;
	while (digits[n] != '\0')
	{
		if (isdigit(digits[n]) == 0)
		{
			return (1);
		}
		n = n + 1;
	}
	return (0);
}

/**
 * main - Write a program that adds positive numbers
 * @argc: count of total command line arguments
 * @argv: the array of character string of each command line argument
 * atoi: to convert string into integer
 * isdigit: to check if argv[] is integer
 * Return: 0 success; if argv[] is not digits, return 1
 */
int main(int argc, char *argv[])
{
	int add;
	int count;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	count = 1;
	add = 0;
	while (count < argc)
	{
		if (check_argv_digit(argv[count]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add = add + atoi(argv[count]);
			count = count + 1;
		}
	}
	printf("%d\n", add);
	return (0);
}
