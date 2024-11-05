#include "clib.h"

char	*strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	str = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	strlcpy(str, s1, s1_len + 1);
	strlcat(str, s2, s1_len + s2_len + 1);
	return (str);
}
