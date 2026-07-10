#include "../push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}