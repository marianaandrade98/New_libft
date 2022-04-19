#include "libft.h"

static size_t	char_counter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	new = (char **)malloc(sizeof(char *) * char_counter(s, c) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str = (char *)s;
			while (*s && *s != c)
				s++;
			new[i] = (char *)malloc(s - str + 1);
			ft_strlcpy(new[i++], str, s - str + 1);
		}
		else
			s++;
	}
	new[i] = 0;
	return (new);
}
