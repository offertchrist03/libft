/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:42:00 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 12:56:28 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *str, char sep)
{
	size_t	count;
	size_t	i;

	if (!str)
		return (0);
	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
			count++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (count);
}

static size_t	word_len(char const *str, char sep)
{
	size_t	i;

	if (!str)
		return (0);
	if (sep == '\0')
		return (ft_strlen(str));
	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**buff_arr;
	size_t	buff_len;
	size_t	buff_arr_i;
	size_t	temp_word_len;
	size_t	i;

	buff_len = word_count(s, c);
	buff_arr = (char **)malloc((buff_len + 1) * sizeof(char *));
	if (!buff_arr)
		return (NULL);
	buff_arr_i = 0;
	i = 0;
	while (buff_arr_i < buff_len)
	{
		while (s[i] && s[i] == c)
			i++;
		temp_word_len = word_len(&s[i], c);
		buff_arr[buff_arr_i] = ft_substr(&s[i], 0, temp_word_len);
		i += temp_word_len;
		buff_arr_i++;
	}
	buff_arr[buff_arr_i] = NULL;
	return (buff_arr);
}
