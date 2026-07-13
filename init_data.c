#include "push_swap.h"

void	init_data(t_data *data)
{
	data->a = NULL;
	data->b = NULL;

	data->size_a = 0;
	data->size_b = 0;
	data->disorder = 0.00;
	data->bench = 0;
	data->strategy = ADAPTIVE;
	data->set_strategy = 0;
}