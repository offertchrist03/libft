/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:42:00 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:30:29 by mahendri         ###   ########.fr       */
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
size_t	ft_strlcat(char *dst, const char *src, size_t size)
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
size_t	*size_part(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	*arr;
	size_t	arr_i;

	arr_i = 0;
	arr = (size_t *)malloc(count_part(s, c) * sizeof(size_t));
	if (!arr)
	{
		free(arr);
		return (0);
	}
	i = 0;
	j = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && !(s[i + 1] == c))
		{
			arr[count] = j - 1;
			count++;
			j = 0;
		}
		i++;
		j++;
	}
	arr[count] = j - 1;
	if (s[i] == '\0' && !(s[i - 1] == c))
		count++;
	return (arr);
}

int	split_part(char **arr_str, char const *s, char c)
{
	int	i;

	i = 0;
	(void)c;
	ft_strlcat(arr_str[1], &s[i], 4);
	return (1);
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

char	**ft_split(char const *s, char c)
{
	size_t	*arr_len;
	char	**buffer_str;
	size_t	i;
	size_t	str_i;
	size_t	count;

	count = count_part(s, c);
	buffer_str = (char **)malloc(count * sizeof(char *));
	if (!buffer_str)
	{
		free(buffer_str);
		return (NULL);
	}
	i = 0;
	arr_len = size_part(s, c);
	printf("***\n");
	while (arr_len[i] && i < count)
	{
		printf("[%zu]\n", arr_len[i]);
		i++;
	}
	i = 0;
	str_i = 0;
	while (i < count)
	{
		buffer_str[i] = (char *)malloc(arr_len[i] * sizeof(char));
		if (!buffer_str[i])
		{
			free(buffer_str[i]);
			free(buffer_str);
			return (NULL);
		}
		i++;
	}
	printf(">> RES = %d\n", split_part(buffer_str, s, c));
	free(arr_len);
	return (buffer_str);
}
