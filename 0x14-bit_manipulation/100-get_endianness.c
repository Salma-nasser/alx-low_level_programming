#include "main.h"
/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *bytePtr = (char *)&num;

	return ((*bytePtr == 1) ? 1 : 0);
}
