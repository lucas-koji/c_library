#include "clib.h"

size_t	strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	src_len;
	size_t	i;

	src_len = strlen(src);
	i = 0;
	if (dsize > 0)
	{
		while ((src[i]) && (i < dsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
