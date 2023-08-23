#include "shell.h"

/**
 * bfree - Frees a Pointer and NULLs The address
 * @ptr: address Of The Pointer To fFee
 *
 * return: 1 if Freed, Otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
