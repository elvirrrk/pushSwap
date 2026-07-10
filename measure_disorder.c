#include "push_swap.h"

void	measure_disorder(t_data *data)
{
	int	total_pairs;
	int	mistakes;
	t_stack	*node;

	total_pairs = 0;
	mistakes = 0;

	if (!data->a)
		return ;
	node = data->a;
	while (node)
	{
		if (node->value > node->next->value)
			mistakes += 1;
		total_pairs += 1;
		node = node->next->next;
	}
		
	data->disorder = total_pairs / mistakes;
}