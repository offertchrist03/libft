/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:26:47 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:33:18 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("%zu", ft_strlen((const char *)argv[1]));
	return (0);
}
