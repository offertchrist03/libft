/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:38:02 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/30 09:43:58 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				str_len;

	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	str_len = ft_strlen((const char *)str);
	if (c == '\0')
		return ((char *)&str[str_len]);
	while (str_len > 0)
	{
		str_len--;
		if (str[str_len] == (unsigned char)c)
			return ((char *)&str[str_len]);
	}
	return (NULL);
}
