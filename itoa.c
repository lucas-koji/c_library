#include "clib.h"

static void	put_array(long int number, char *array, size_t digit)
{
	if (number < 0)
	{
		array[0] = '-';
		number = -number;
	}
	while (number >= 10)
	{
		array[digit] = (number % 10) + '0';
		number /= 10;
		digit--;
	}
	array[digit] = (number % 10) + '0';
}

static size_t	count_digit(long int number)
{
	size_t	digit;

	digit = 1;
	while (number >= 10 || number <= -10)
	{
		number /= 10;
		digit++;
	}
	return (digit);
}

char	*itoa(int n)
{
	char		*array;
	long int	number;
	size_t		digit_count;

	number = (long int) n;
	digit_count = count_digit(number);
	if (number < 0)
		digit_count++;
	array = (char *) malloc(sizeof(char) * (digit_count + 1));
	if (!array)
		return (NULL);
	put_array(number, array, digit_count - 1);
	array[digit_count] = '\0';
	return (array);
}
