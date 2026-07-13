#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2) // it wasn't in libft
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int is_valid_number(char *str) // check for only numbers
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		write_error();
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			write_error();
		i++;
	}
	return (1);
}





