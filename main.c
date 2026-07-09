#include "push_swap.h"

int main (int argv, char **argc)
{
	double	disorder;
	t_data data;

	if (argv <= 2)
		return (0);
	init_data(data);
	if (parsing(argv, **argc)) // creating stack, chose strategy, if everything ok
	{
		write(2, "Error\n", 6);
		return (1); 
	}
	disorder = measure_disorder();
	if (data->bench)
		print_benchmark(data_here); // benchmark.c
	free_data(data); // free.c
	return (0);
}