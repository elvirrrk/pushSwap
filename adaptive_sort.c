#include "push_swap.h"

void	adaptive_sort(t_data data)
{
	if (data.disorder < 0.2)
		// simple_sort(&data);
		printf("%s\n", "simple");
	if (0.2 <= data.disorder ||  data.disorder < 0.5)
		// medium_sort(&data);
		printf("%s\n", "medium");
	if (data.disorder >= 0.5)
		// complex_sort(&data);
		printf("%s\n", "complex");
}