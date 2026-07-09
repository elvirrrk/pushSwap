# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>

typedef struct s_status {
	int sa;
	int sb;
	int ss;
	int pa;
	int pb;
	int ra;
	int rb;
	int rr;
	int rra;
	int rrb;
	int rrr;
} t_status;

typedef struct s_data {
	t_stack	*a;
	t_stack *b;

	int size_a;
	int size_b;

	double disorder;
	int bench; // 0 or 1 mean if bench trun on or not
	
	t_strategy strategy;
	t_status status;

} t_data;

#endif