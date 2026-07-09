#include "push_swap.c"

int	is_bench(char *argc, t_data data)
{
	char bench[7];

	bench = "--bench";

	if (ft_strcmp(argc, bench) != 0)
		return (0);
	if (data->bench)
		error();
	data->bench = 1;
	return (1);
}

int	is_strategy(char *argc, t_data data)
{
	if (what_is_startegy(argc))
		return (0);
	if (ft_strcmp(data->strategy, argc))
		data->strategy = chose_strategy(argc);
}

int parsing(int argv, char **argc, t_data data)
{
	int	i;

	i = 1;

	while (i < 3)
	{
		if (is_bench(argc[i], data))
			i++;
		if (is_strategy(argc[i], data))
			i++;
	}

	// check input for arguments that are not integers,
	// integers outside the valid range, or duplicate values.
	// if (err) 
	// 	return (1);

	// create stack and send as parameter in func below
	return(0);
}