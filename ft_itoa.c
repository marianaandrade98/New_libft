#include "libft.h"

static int	count_digits(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		c++;
	while (n)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count_digits(n);
	nb = malloc(sizeof(char) * (i + 1));
	if (!nb)
		return (NULL);
	if (n == 0)
		nb[0] = '0';
	nb[i] = '\0';
	if (n < 0)
	{
		nb[0] = '-';
		n = -n;
	}
	while (n != 0 && i >= 0)
	{
		nb[i-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (nb);
}
