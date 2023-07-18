#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct includes a char * and a function pointer
 * which points to a function that takes two ints and return int
 * @op: pointer to the operators
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int num1, int num2);
#endif
