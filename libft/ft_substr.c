/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandrade <mandrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:50:20 by mandrade          #+#    #+#             */
/*   Updated: 2022/04/19 20:50:22 by mandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
	{
		sub = malloc(sizeof(char));
		if (!sub)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	if (size < len)
		return (ft_strdup(s + start));
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (start < size && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
