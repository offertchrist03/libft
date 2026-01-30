/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:29:38 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/29 16:25:35 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*buffer;
	unsigned int	i;

	if (!s)
		return (NULL);
	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		buffer[i] = (char)c;
		i++;
	}
	return (s);
}
