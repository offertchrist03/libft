/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:02:22 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 09:13:17 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char	data[] = "Bonjour le monde !";
	size_t	len;
	char	char_to_find;
	void	*result;

	len = strlen(data);
	char_to_find = 'm';
	result = ft_memchr(data, char_to_find, 10);
	if (result != NULL)
	{
		printf("Caractère '%c' trouvé à l'index : %ld\n", char_to_find,
			(char *)result - data);
	}
	else
	{
		printf("Caractère '%c' non trouvé.\n", char_to_find);
	}
	return (0);
}
