#include "push_swap.h"

int main (int argv, char **argc)
{
	double	disorder;
	t_data data;

	if (argv <= 2)
		return (0);
	init_data(data);
	parsing(argv, **argc); // creating stack, chose strategy, if everything ok
	disorder = measure_disorder(data);
	// execute algorithms
	if (data->bench)
		print_benchmark(data_here); // benchmark.c
	free_data(data); // free.c
	return (0);
}