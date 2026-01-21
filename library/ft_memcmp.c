/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:23:02 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 08:32:50 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buff_s1;
	unsigned char	*buff_s2;
	unsigned int	i;

	i = 0;
	buff_s1 = (unsigned char *)s1;
	buff_s2 = (unsigned char *)s2;
	while (i < n && (buff_s1[i] || buff_s2[i]))
	{
		if (!(buff_s1[i] == buff_s2[i]))
			return ((int)buff_s1[i] - (int)buff_s2[i]);
		i++;
	}
	return (0);
}
