#include "clib.h"

void	*memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*c_dst;
	const unsigned char	*c_src;

	c_dst = (unsigned char *) dst;
	c_src = (const unsigned char *) src;
	if (!(c_dst || c_src))
		return (NULL);
	if (c_dst < c_src)
		return (memcpy(c_dst, c_src, n));
	else
	{
		while (n--)
			c_dst[n] = c_src[n];
	}
	return (dst);
}
