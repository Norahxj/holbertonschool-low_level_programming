#ifndef CALC_H
#define CALC_H
/**
 * struct op - to associate an operator with a function
 * @op: The operator
 * @f: The function that corresponds to the operator
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

#endif
