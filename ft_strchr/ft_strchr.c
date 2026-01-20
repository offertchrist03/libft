/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:31:49 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 14:54:59 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	cast;

	i = 0;
	while (s[i])
	{
		cast = s[i];
		if (cast == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
