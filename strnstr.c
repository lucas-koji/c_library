#include "clib.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	i = 0;
	little_len = strlen(little);
	if (!little_len)
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && j < little_len)
		{
			if (big[i + j] != little[j] || (i + j) > len - 1)
				break ;
			if (j + 1 == little_len)
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
