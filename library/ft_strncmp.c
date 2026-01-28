/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:31:19 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 09:17:27 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && !(!s1[i] && !s2[i]))
	{
		if ((int)s1[i] != (int)s2[i])
			return ((int)s1[i] - (int)s2[i]);
		i++;
	}
	return (0);
}
