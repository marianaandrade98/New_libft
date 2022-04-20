/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandrade <mandrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:48:38 by mandrade          #+#    #+#             */
/*   Updated: 2022/04/19 20:48:40 by mandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
