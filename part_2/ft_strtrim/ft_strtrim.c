/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:31:30 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:34:41 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (little[i] == '\0' || !little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (j < ft_strlen(little))
			{
				if (big[i + j] == little[j])
					j++;
				else
					break ;
			}
			if (j == ft_strlen(little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

static size_t	count_set(char const *str, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_strnstr(&str[i], set, ft_strlen(set)))
		{
			count++;
			i += ft_strlen(set);
		}
		else
			i++;
	}
	return (count);
}

static char	*do_trim(char *buffer, char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] == set[0] && ft_strnstr(&s1[i], set, ft_strlen(set)))
			i += ft_strlen(set);
		else
		{
			buffer[j] = s1[i];
			i++;
			j++;
		}
	}
	buffer[j] = '\0';
	return (buffer);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	size_t	malloc_len;

	if (ft_strlen(set) <= 0 || !set[0] || !set)
		return ((char *)s1);
	malloc_len = ft_strlen(s1) - (count_set(s1, set) * ft_strlen(set));
	buffer = (char *)malloc(malloc_len * sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	buffer = do_trim(buffer, s1, set);
	return (buffer);
}
