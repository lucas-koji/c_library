#include "clib.h"

char	*strchr(const char *s, int c)
{
	while (*s || c == '\0')
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
