#include i<stdio.h>
/**
 * Description:main - Print the size of various
 * types onthe computer.
 * Return: 0 if sucess.
 */


int main(void)
{
        printf("size of char: %d byte(s)\n", sizeof (char));
	printf("size of int: %d bytes\n", sizeof(int));
	printf("size of long: %d bytes\n", sizeof(long));	
	printf("size of long long: %d bytes\n", sizeof(long long));
	printf("size of float: %d bytes\n", sizeof(float));
	return (0);
}
