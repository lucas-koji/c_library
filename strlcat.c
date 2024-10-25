#include "clib.h"

size_t	strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	src_index;
	size_t	dst_index;

	src_index = 0;
	dst_index = 0;
	while (dst[dst_index] && dst_index < dsize)
		dst_index++;
	while (src[src_index] && (src_index + dst_index + 1) < dsize)
	{
		dst[src_index + dst_index] = src[src_index];
		src_index++;
	}
	if (dst_index != dsize)
		dst[src_index + dst_index] = '\0';
	return (strlen(src) + dst_index);
}
