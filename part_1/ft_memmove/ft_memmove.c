/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:55:21 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 16:38:48 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer_dest;
	unsigned char	*buffer_src;

	buffer_dest = (unsigned char *)dest;
	buffer_src = (unsigned char *)src;
	n--;
	while (n > 0)
	{
		buffer_dest[n] = buffer_src[n];
		n--;
	}
	return (dest);
}
