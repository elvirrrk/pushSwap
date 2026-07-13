#include "push_swap.h"

int main (int argc, char **argv)
{
	t_data data;

	if (argc <= 2)
		return (0);
	init_data(&data);
	parsing(argc, argv, &data); // creating stack, chose strategy, if everything ok
	measure_disorder(&data);
	printf("%2.f\n", data.disorder);
	// execute algorithms
	if (data.bench)
		printf("%s\n", "find benchmark");
		// print_benchmark(data_here); // benchmark.c
	// free_data(&data); // free.c
	return (0);
}