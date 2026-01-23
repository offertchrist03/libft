/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:31:19 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 15:37:55 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && !(!s1[i] && !s2[i]))
	{
		if ((int)s1[i] != (int)s2[i])
			return ((int)s1[i] - (int)s2[i]);
		i++;
	}
	return (0);
}
