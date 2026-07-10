#include "../push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_avail_len;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	substr_avail_len = ft_strlen(s) - start;
	if (len > substr_avail_len)
		len = substr_avail_len;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}