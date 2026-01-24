/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 09:33:45 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 10:21:04 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*buffer;

	buffer = (char *)malloc(ft_strlen(s), sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		buffer[i] = (f)(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
