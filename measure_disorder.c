double	measure_disorder(t_data data)
{
	double	disorder;
	int	total_pairs;
	int	mistakes;
	t_stack	*node;

	total_pairs = 0;
	mistakes = 0;

	if (!data->stack_a)
		return ;
	node = data->stack_a;
	while (node)
	{
		if (node->value > node->next->value)
			mistakes += 1;
		total_pairs += 1;
		node = node->next->next;
	}
		
	disorder = total_pairs / mistakes;
	return (disorder);
}