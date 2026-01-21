/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:38:02 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 17:38:02 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	while (s_len > 0)
	{
		s_len--;
		if ((int)s[s_len] == c)
			return ((char *)&s[s_len]);
	}
	return (NULL);
}
