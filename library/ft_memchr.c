/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:02:19 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 02:41:37 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*buff_s;
	size_t	i;

	if (c >= 256)
		c -= 256;
	i = 0;
	buff_s = (char *)s;
	while (i < n)
	{
		if (buff_s[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
