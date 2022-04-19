#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (!source && !dest)
		return (0);
	if (source < dest)
	{
		source += len;
		dest += len;
		while (len--)
			*--dest = *--source;
	}
	else
	{
		while (len--)
			*dest++ = *source++;
	}
	return (dst);
}
