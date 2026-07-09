#include "push_swap.c"

int parsing(int argv, char **argc)
{
	int	i;
	char bench[7];

	i = 1;
	bench = "--bench";

	if (!ft_strcmp(argc[i], bench))
	{
		data->bench = 1;
		i++;
	}

	if (is_strategy(argc[i]))
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