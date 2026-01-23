/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:03:59 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 14:17:38 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
static size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j] && j < size)
	{
		dst[i + j] = (char)src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(dst));
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*buffer;
	unsigned int	str_len;

	str_len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	buffer = (char *)malloc(str_len * sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	str_len = 0;
	str_len = ft_strlcat(buffer, s1, ft_strlen((char *)s1));
	str_len = ft_strlcat(buffer, s2, ft_strlen((char *)s2));
	return (buffer);
}
