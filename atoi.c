#include "clib.h"

int	ft_atoi(const char *nptr)
{
	int	signal;
	int	number;

	signal = 1;
	number = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signal = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		number = (number * 10) + (*nptr - '0');
		nptr++;
	}
	return (number * signal);
}
