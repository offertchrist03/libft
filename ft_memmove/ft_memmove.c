/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:55:21 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/19 13:55:21 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	buffer_temp;
	unsigned char	*buffer_dest;
	unsigned char	*buffer_src;
	unsigned int	i;

	buffer_dest = (unsigned char *)dest;
	buffer_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		buffer_temp = buffer_src[i];
		buffer_dest[i] = buffer_temp;
		buffer_temp = 0;
		i++;
	}
	return (dest);
}
