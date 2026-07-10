#include "push_swap.h"

int main (int argv, char **argc)
{
	t_data data;

	if (argv <= 2)
		return (0);
	init_data(&data);
	parsing(argv, argc, &data); // creating stack, chose strategy, if everything ok
	measure_disorder(&data);
	printf("%2.f\n", data.disorder);
	// execute algorithms
	if (data.bench)
		printf("%s\n", "find benchmark");
		// print_benchmark(data_here); // benchmark.c
	// free_data(&data); // free.c
	return (0);
}