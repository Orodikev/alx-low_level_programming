#include "main.h"
/**
 * _strspn - Entry point
 * @lp: input
 * @pt: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *lp, char *pt)
{
	unsigned int j = 0;
	int i;

	while (*lp)
	{
		for (i = 0; pt[i]; i++)
		{
			if (*lp == pt[i])
			{
				j++;
				break;
			}
			else if (pt[i + 1] == '\0')
				return (j);
		}
		lp++;
	}
	return (j);
}
