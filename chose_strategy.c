#include "push_swap.h"

int	what_is_startegy(char *str)
{
	if (ft_strcmp(str,"--simple") || ft_strcmp(str, "--medium") ||
	ft_strcmp(str, "--complex") || ft_strcmp(str, "--adaptive"))
		return (1);
	return (0);
}

t_strategy	chose_strategy(char *str)
{
	if (ft_strcmp(str,"--simple"))
		return (SIMPLE);
	else if (ft_strcmp(str, "--medium"))
		return (MEDIUM);
	else if (ft_strcmp(str, "--complex"))
		return (COMPLEX);
	return (ADAPTIVE);
}