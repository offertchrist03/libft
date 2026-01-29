/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:02:19 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/29 10:25:28 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff_s;
	size_t			i;

	if (c >= 256)
		c -= 256;
	i = 0;
	buff_s = (unsigned char *)s;
	while (i < n)
	{
		if (buff_s[i] == c)
			return ((void *)&buff_s[i]);
		i++;
	}
	return (NULL);
}
