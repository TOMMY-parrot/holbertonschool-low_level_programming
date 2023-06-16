#include <stdio.h>
/**
 * Description:main - Print the size of various
 * types onthe computer.
 * Return: 0 if sucess.
 */


int main(void)
{
        printf("size of char: %d byte(s)\n", sizeof (char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of long: %d byte(s)\n", sizeof(long));	
	printf("size of long long: %d byte(s)\n", sizeof(long long));
	printf("size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
