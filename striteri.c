#include "clib.h"

void	striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	index;

	if (!s)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}
