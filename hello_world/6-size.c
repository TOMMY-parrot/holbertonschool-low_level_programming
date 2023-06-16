# include (stdio.h)
/**
 * Description:main - Print the size of various
 * types onthe computer.
 * Return: 0 if sucess.
 */

int main(void)
{
	printf("size of int: %d bytes\n", sizeof(int));
	printf("size of float: %d bytes\n", sizeof(float));
	printf("size of double: %d bytes\n", sizeof(double));
	printf("size of char %d bytes\n", sizeof(char));
	return (0);
}
