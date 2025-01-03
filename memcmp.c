#include "clib.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (!(s1 || s2) || n == 0)
		return (0);
	while ((*str1 == *str2) && (--n > 0))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
