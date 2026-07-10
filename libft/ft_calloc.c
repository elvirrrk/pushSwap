#include "push_swap.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*str;

	if (size != 0 && n > ((size_t)-1) / size)
		return (NULL);
	str = malloc(n * size);
	if (!str)
		return (NULL);
	ft_bzero(str, n * size);
	return (str);
}