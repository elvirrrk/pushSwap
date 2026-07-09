# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>

typedef struct	s_status {
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
} t_status;

typedef struct	s_stack {
	int				value;
	struct s_stack	*next;
} t_stack;

typedef struct s_strategy {
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
} t_strategy;

typedef struct	s_data {
	t_stack	*a;
	t_stack *b;

	int	size_a;
	int	size_b;

	double	disorder;
	int		bench; // 0 or 1 mean if bench trun on or not
	
	t_strategy strategy;
	t_status status;

} t_data;

int		ft_isdigit(int c);
int		ft_strcmp(const char *s1, const char *s2);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *nptr);
void	ft_lstiter(t_stack *lst, void (*f)(void *));
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int value);


#endif