#include "clib.h"

char	*strtrim(char const *s1, char const *set)
{
	int		str_len;
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	end = strlen(s1);
	while (end > start && strchr(set, s1[end - 1]))
		end--;
	str_len = end - start;
	str = (char *) malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	strlcpy(str, s1 + start, str_len + 1);
	return (str);
}
