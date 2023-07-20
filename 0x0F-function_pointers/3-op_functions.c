#include <stdio.h>
#include <stdlib.h>
int op_add(int a, int b);
/**
 * op_add - add two numbers
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b);
/**
 * op_sub - subtract 2 num
 * @a: first int
 * @b: 2nd int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b);
/**
 * op_mul - multiplies a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b);
/**
 * op_div - devide 2 nums
 * @a: 1st
 * @b: 2nd
 * Return: devision
 */
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b);
/**
 * op_mod - remainder
 * @a: 1st num
 * @b: 2nd num
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
