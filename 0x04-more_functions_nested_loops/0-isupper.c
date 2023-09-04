#include "main.h"

/**
 * _isupper : Caps Characters
 * @c: charcacter to check
 * return 1 if Upper else returns 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(1);
	else
		return(0);
