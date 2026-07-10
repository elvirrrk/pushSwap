#include "push_swap.c"

int	check_bench(char *argv, t_data data)
{
	char bench[7];

	bench = "--bench";

	if (ft_strcmp(argv, bench) != 0)
		return (0);
	if (data->bench)
		error();
	data->bench = 1;
	return (1);
}

int	check_strategy(char *argv, t_data data)
{
	t_strategy	strategy;

	if (ft_strcmp(argv,"--simple"))
		strategy = SIMPLE;
	else if (ft_strcmp(argv, "--medium"))
		strategy = MEDIUM;
	else if (ft_strcmp(argv, "--complex"))
		strategy = COMPLEX;
	else if (ft_strcmp(argv, "--adaptive"))
		strategy = ADAPTIVE;
	if (data->set_strategy)
		return (0);
	data->strategy = strategy;
	data->set_strategy = 1;
	return (1);
}

int	parse_number(char argv, t_data data)
{
	int		number;
	t_stack	*node;

	number = ft_atoi(argv); // in atoi is check for only numbers
	if (-2147483647 - 1 > number > 2147483647)
		write_error();
	data->size_a += 1;
	node = data->stack_a;
	while (node)
	{
		if (node->value == node->next->value)
			write_error();
		node = node->next;
	}
	data->stack_a = ft_lstnew(number);
	data->size_a += 1;
}

void	parsing(int argc, char **argv, t_data data)
{
	int		i;
	int		j;
    int		options;
    int		result;
	char	array[];

    i = 1;
    options = 0;
    while (i < argc && options < 2)
    {
        result = check_bench(argv[i], data);
        if (result == -1)
            write_error();
        if (result == 1)
        {
            options++;
            i++;
            continue ;
        }
        result = check_strategy(argv[i], data);
        if (result == -1)
            write_error();
        if (result == 1)
        {
            options++;
            i++;
            continue ;
        }
        break ;
    }

	//  if input "1 2 3 4 5" as string
	if (i == argc - 1)
	{
		j = 0;
		array = ft_split(argv[i], " ");
		while (array[j])
        	parse_number(array[j++], data);
	}

	while (i < argc)
        parse_number(argv[i++], data);
}