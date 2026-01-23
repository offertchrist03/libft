/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:15:20 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 14:15:13 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t number, size_t size)
{
	size_t	i;
	char	*buffer;

	buffer = (char *)malloc(number * size);
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	i = 0;
	while (i < number)
	{
		buffer[i] = '\0';
		i++;
	}
	return ((void *)buffer);
}
