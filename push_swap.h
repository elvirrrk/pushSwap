# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h> // only for testing, remove after finish

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

typedef enum e_strategy {
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
	int		set_strategy;
	t_status status;

} t_data;

// push swap function

void	adaptive_sort(t_data data);
void	init_data(t_data *data);
void	measure_disorder(t_data *data);
void	parsing(int argc, char **argv, t_data *data);
int		ft_strcmp(const char *s1, const char *s2);
void	write_error(void);

// libft

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t size);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstiter(t_stack *lst, void (*f)(void *));
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int value);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif