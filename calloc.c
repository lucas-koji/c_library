#include "clib.h"

void	*calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	if (size == 0 || nmeb == 0)
		return (malloc(0));
	if ((nmeb * size) / nmeb != size)
		return (NULL);
	ptr = (unsigned char *) malloc(nmeb * size);
	if (!ptr)
		return (NULL);
	bzero(ptr, nmeb * size);
	return ((void *) ptr);
}
