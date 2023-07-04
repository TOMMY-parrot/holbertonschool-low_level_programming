# include "main.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: count of total command line arguments
 * @argv: the array of character string of each command line argument
 * atoi: to convert string to int
 * Return: 0 success; if argc != 2, return 1
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		sum = i * j;
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
