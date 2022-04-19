#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = malloc(ft_strlen(s1) + 1);
	if (!dup)
		return (NULL);
	ft_memmove(dup, s1, ft_strlen(s1) + 1);
	return (dup);
}
