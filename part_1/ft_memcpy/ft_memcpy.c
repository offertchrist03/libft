/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:12:57 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 15:46:43 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*buffer_dest;
	const unsigned char	*buffer_src;

	buffer_dest = (unsigned char *)dest;
	buffer_src = (const unsigned char *)src;
	i = 0;
	while (i < n && buffer_src[i])
	{
		buffer_dest[i] = buffer_src[i];
		i++;
	}
	return (dest);
}
