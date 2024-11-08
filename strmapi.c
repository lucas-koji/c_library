#include "clib.h"

char	*strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	str_len;
	size_t	index;

	if (!s)
		return (NULL);
	str_len = strlen(s);
	str = (char *) malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
