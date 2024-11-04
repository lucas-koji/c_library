#include "clib.h"

char	*substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;

	str_len = strlen(s);
	if (!s)
		return (NULL);
	if (start >= str_len)
		return (strdup(""));
	if (len > (str_len - start))
		len = str_len - start;
	substr = (char *) malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	strlcpy(substr, (s + start), (len + 1));
	return (substr);
}
