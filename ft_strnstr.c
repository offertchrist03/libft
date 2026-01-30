/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:26:41 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/30 09:56:19 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
				if (big[i + j] == little[j] && (i + j) < len)
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
