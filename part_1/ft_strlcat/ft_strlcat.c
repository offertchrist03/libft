/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:21 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 04:05:51 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	if (size <= 0)
		return (ft_strlen(src));
	if (size > ft_strlen(dst))
		res = ft_strlen(src) + ft_strlen(dst);
	else
		res = ft_strlen(src) + size;
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && ft_strlen(dst) < size - 1)
	{
		dst[i + j] = (char)src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (res);
}
