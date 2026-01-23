/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:42:00 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 08:09:25 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*buffer;
	unsigned int	i;

	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		buffer[i] = (char)c;
		i++;
	}
	return (s);
}

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	if (size <= 0)
		return (ft_strlen(src));
	if (size > ft_strlen(dst))
		res = ft_strlen(src) + ft_strlen(dst);
	else
		res = ft_strlen(src) + size;
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && ft_strlen(dst) < size - 1)
	{
		dst[i + j] = (char)src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (res);
}

size_t	count_part(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && !(s[i + 1] == c))
			count++;
		i++;
	}
	if (s[i] == '\0' && !(s[i - 1] == c))
		count++;
	return (count);
}

void	free_arr(char **arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	do_split(char **buff_arr, const char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	buff_count;

	i = 0;
	j = 0;
	buff_count = count_part(str, c);
	while (i < buff_count)
	{
		k = 0;
		while (str[j])
		{
			if (str[j] == c)
			{
				j++;
				buff_arr[i][k] = '\0';
				break ;
			}
			buff_arr[i][k] = str[j];
			j++;
			k++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**buff_arr;
	size_t	buff_count;
	size_t	i;

	buff_count = count_part(s, c);
	buff_arr = (char **)malloc(buff_count * sizeof(char *));
	if (!buff_arr)
	{
		free(buff_arr);
		return (NULL);
	}
	i = 0;
	while (i < buff_count)
	{
		buff_arr[i] = (char *)malloc(100 * sizeof(char));
		if (!buff_arr[i])
		{
			free_arr(buff_arr, buff_count);
			return (NULL);
		}
		i++;
	}
	do_split(buff_arr, s, c);
	return (buff_arr);
}
