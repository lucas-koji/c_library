#include "clib.h"

int	isalnum(int c)
{
	return (isalpha(c) || isdigit(c));
}
