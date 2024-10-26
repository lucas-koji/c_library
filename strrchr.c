#include "clib.h"

char	*strrchr(const char *s, int c)
{
	int	len;

	len = strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char) c)
			return ((char *) &s[len]);
		len--;
	}
	return (NULL);
}
