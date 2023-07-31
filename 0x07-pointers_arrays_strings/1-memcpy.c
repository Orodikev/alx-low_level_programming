#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@mems: memory where is stored
 *@memc: memory where is copied
 *@b: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *mems, char *memc, unsigned int b)
{
	int j = 0;
	int i = b;

	for (; j < i; j++)
	{
		mems[j] = memc[j];
		b--;
	}
	return (mems);
}
