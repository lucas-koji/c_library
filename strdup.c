#include "clib.h"

char	*strdup(const char *s)
{
	int		len;
	char	*new_string;

	len = strlen(s) + 1;
	new_string = (char *) malloc(len * sizeof(char));
	if (!new_string)
		return (NULL);
	memmove(new_string, s, len);
	return ((char *) new_string);
}
