/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:55:21 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 09:20:54 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer_dest;
	unsigned char	*buffer_src;
	size_t			i;

	buffer_dest = (unsigned char *)dest;
	buffer_src = (unsigned char *)src;
	if (buffer_src <= buffer_dest)
	{
		while (n > 0)
		{
			n--;
			buffer_dest[n] = buffer_src[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			buffer_dest[i] = buffer_src[i];
			i++;
		}
	}
	return (dest);
}
