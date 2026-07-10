#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*node;

	if (!lst || lst->next == NULL)
		return (lst);
	node = lst;
	while (node->next != NULL)
		node = node->next;
	return (node);
}