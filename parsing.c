#include "push_swap.c"

int	is_bench(char **argc)
{
	char bench[7];

	bench = "--bench";

	if (!ft_strcmp(argc[1], bench) && !ft_strcmp(argc[2], bench))
		return (err);
	if ((!ft_strcmp(argc[1], bench) && ft_strcmp(argc[2], bench)))
	{
		data->bench = 1;
		return (1);
	}
	if ((ft_strcmp(argc[1], bench) && !ft_strcmp(argc[2], bench)))
	{
		data->bench = 1;
		return (1);
	}
	return (0);
}

int	is_strategy(char **argc)
{
	if (what_is_startegy(argc[i]))
	{
		data->strategy = chose_strategy(argc[i]);
		i++;
	}
}

int parsing(int argv, char **argc)
{
	int	i;

	i = 1;

	if (is_strategy || )
	{
		data->strategy = chose_strategy(argc[i]);
		i++;
	}

	if (what_is_startegy(argc[i]))
	{
		data->strategy = chose_strategy(argc[i]);
		i++;
	}

	// check input for arguments that are not integers,
	// integers outside the valid range, or duplicate values.
	// if (err) 
	// 	return (1);

	// create stack and send as parameter in func below
	return(0);
}