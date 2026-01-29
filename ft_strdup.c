/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:42:42 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/29 11:33:54 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*buffer;
	int		i;

	buffer = (char *)malloc(ft_strlen(str) + 1 * sizeof(char));
	if (!buffer)
		return (NULL);
	i = 0;
	while (str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = ' ';
	buffer[i++] = '\0';
	return (buffer);
}
