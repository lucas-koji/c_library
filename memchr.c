#include "clib.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;

	string = (unsigned char *) s;
	while (n > 0)
	{
		if (*string == (unsigned char) c)
			return ((void *) string);
		string++;
		n--;
	}
	return (NULL);
}
