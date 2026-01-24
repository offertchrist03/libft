/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:15:20 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 10:06:13 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*buffer;
	long int		num;
	long int		s;

	num = (long int)number;
	s = (long int)size;
	if ((s == 0 && num == 0) || (s < 0 && num == 0) || (s == 0 && num < 0))
		return (malloc(0));
	if ((s < 0 || num < 0) || !((num && !s) || (!num && s) || (num && s))
		|| (num == (long int)SIZE_MAX && s == (long int)SIZE_MAX))
		return (NULL);
	buffer = (unsigned char *)malloc(num * s);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, num * s);
	return ((void *)buffer);
}
