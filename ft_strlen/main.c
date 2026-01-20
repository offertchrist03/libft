/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:26:47 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 11:22:47 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *s);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("%zu", ft_strlen(argv[1]));
	return (0);
}
