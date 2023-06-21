#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: addition of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: difference between a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: multiplication between a & b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: quotient between a & b, or exits code 100 if b = 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: 1st number
 * @b: 2nd number
 * Return: remainder of a / b or exit code 100 if b = 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
