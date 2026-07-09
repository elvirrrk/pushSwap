#include "push_swap.h"

int main (int argv, char **argc)
{
	double	disorder;
	if (argv < 2)
		return (0);
	if (parsing(char **argc)) // creating stack if everything ok
	{
		write(2, "Error\n", 6);
		return (1); 
	}
	disorder = measure_disorder();
	strategy(char **argv, stack, disorder);
	choose_strategy(int i, char **argv, stack);
	if (data contain bench)
		print_benchmark(data_here); // benchmark.c
	free_data(data); // free.c
	return (0);
}