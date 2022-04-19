#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, (count * size));
	return (p);
}
void    *ft_calloc(size_t count, size_t size)
{
    void *const    res = malloc(count * size);

    if (size && ((SIZE_T_MAX / size) < count))
        return (NULL);
    if (res)
        ft_bzero(res, count * size);
    return (res);
}