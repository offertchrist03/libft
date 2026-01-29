/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:38:02 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/29 11:01:37 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (c > 256)
		c -= 256;
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
