#include "clib.h"

void	putnbr_fd(int n, int fd)
{
	long int	number;

	number = (long int) n;
	if (number < 0)
	{
		number *= -1;
		write(fd, "-", 1);
	}
	if (number >= 0 && number <= 9)
	{
		number += '0';
		write(fd, &number, 1);
	}
	else
	{
		putnbr_fd(number / 10, fd);
		putnbr_fd(number % 10, fd);
	}
}
