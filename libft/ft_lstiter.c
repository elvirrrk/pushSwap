#include "../push_swap.h"

void	ft_lstiter(t_stack *lst, void (*f)(void *))
{
	t_stack	*node;

	if (!lst || !f)
		return ;
	node = lst;
	while (node)
	{
		f(&node->value); // for write(1, value, 1);
		node = node->next;
	}
}