#include "clib.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*c_dst;
	const unsigned char	*c_src;
	size_t				index;

	c_dst = (unsigned char *) dst;
	c_src = (const unsigned char *) src;
	index = -1;
	while (++index < n)
		c_dst[index] = c_src[index];
	return (dst);
}
