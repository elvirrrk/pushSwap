#include "push_swap.h"

int	check_bench(char *argv, t_data *data)
{
	const char *bench_str;
	bench_str = "--bench";

	if (ft_strcmp(argv, bench_str) != 0)
		return (0);
	if (data->bench)
		write_error();
	data->bench = 1;
	return (1);
}

int check_strategy(char *argv, t_data *data)
{
    t_strategy strategy;

    if (ft_strcmp(argv, "--simple") == 0)
        strategy = SIMPLE;
    else if (ft_strcmp(argv, "--medium") == 0)
        strategy = MEDIUM;
    else if (ft_strcmp(argv, "--complex") == 0)
        strategy = COMPLEX;
    else if (ft_strcmp(argv, "--adaptive") == 0)
        strategy = ADAPTIVE;
    else
        return (0);
    if (data->set_strategy)
        write_error();
    data->strategy = strategy;
    data->set_strategy = 1;
    return (1);
}

void	parse_number(char *argv, t_data *data)
{
	long	num;
	t_stack	*node;

	is_valid_number(argv);
	num = ft_atol(argv);
	printf("%ld\n", num);
	node = data->a;
	// check for dup
	while (node)
	{
		if (node->value == num)
			write_error();
		node = node->next;
	}
	node = ft_lstnew((int)num);
	if (!node)
		write_error();
	ft_lstadd_back(&data->a, node);
	data->size_a++;
}

void	parsing(int argc, char **argv, t_data *data)
{
	int		i;
	int		j;
    int		options;
    int		result;
	char	**array;

    i = 1;
    options = 0;
    while (i < argc && options < 2)
    {
        result = check_bench(argv[i], data);
        if (result)
        {
            options++;
            i++;
            continue ;
        }
        result = check_strategy(argv[i], data);
        if (result)
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
		array = ft_split(argv[i], ' ');
		if (!array)
			write_error();
		while (array[j])
        	parse_number(array[j++], data);
		// free array
		return ;
	}

	while (i < argc)
        parse_number(argv[i++], data);
}