#include "clib.h"

void	*bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n--)
		*str++ = 0;
	return (s);
}
