#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen((char *)s1 + i);
	if (len) 
		while (s1[len + i - 1] && ft_strchr(set, s1[len + i - 1]))
			len--;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, len + 1);
	str[len] = '\0';
	return (str);
}
