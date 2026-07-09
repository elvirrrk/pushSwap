#include "push_swap.h"

void	choose_strategy(int i, char **argv, stack)
{
	if (argc[i] == "--simple")
		simple_sort();
	else if (argc[i] == "--medium")
		medium_sort();
	else if (argc[i] == "--complex")
		complex_sort();
	else
		adaptive_sort();
}