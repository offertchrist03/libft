/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:02:19 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 17:08:24 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff_s;
	unsigned int	i;

	i = 0;
	buff_s = (unsigned char *)s;
	while (i < n && buff_s[i])
	{
		if ((int)buff_s[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
