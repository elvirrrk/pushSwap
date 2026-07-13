#include "../push_swap.h"

long	ft_atol(const char *nptr)
{
	int	i;
	int	result;
	int	sign;
	int	digit;

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (!nptr[i])
		write_error();
	while (nptr[i])
	{
		while (!ft_isdigit(nptr[i]))
			write_error();
		digit = nptr[i] - '0';
		if (sign == 1 && (result > 214748364 || (result == 214748364 && digit > 7)))
			write_error();
		if (sign == -1 && (result > 214748364 || (result == 214748364 && digit > 8)))
			write_error();
		result = result * 10 + digit;
		i++;
    }

	return (result * sign);
}