#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)b;
	i = 0;
	while (len-- > 0)
		str[i++] = (unsigned char)c;
	return (b);
}
