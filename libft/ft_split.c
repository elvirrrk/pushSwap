#include "../push_swap.h"

static int	count_words(char const *s, char c)
{
	int	counter;
	int	in_word;

	counter = 0;
	in_word = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			counter++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (counter);
}

void	word_size(char const *s, char c, int *i, int *start)
{
	while (s[*i] == c)
		(*i)++;
	*start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

char	**clean_arr(char **result, int j)
{
	while (j-- > 0)
		free(result[j]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	result = (char **)ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!result || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		word_size(s, c, &i, &start);
		if (i > start)
		{
			result[j] = ft_substr(s, start, i - start);
			if (!result[j])
				return (clean_arr(result, j));
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}