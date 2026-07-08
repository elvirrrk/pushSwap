#include "push_swap.h"

const char *strategy_name(t_strategy strategy)
{
	if (strategy == SIMPLE)
		return("simple");
	if (strategy == MEDIUM)
		return("medium");
	if (strategy == COMPLEX)
		return("complex");
	return("adaptive");
}