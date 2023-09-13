#include "main.h"

/**
 * _islower - it checksif the alphatet is lower case
 * or not
 *
 * @C: checks input for function
 *
 * Return:1 if it lower case and
 * 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
