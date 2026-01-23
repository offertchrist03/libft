/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:34:14 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 14:54:20 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c);

int	main(int argc, char **argv)
{
	int	n;

	if (argc < 3)
		return (1);
	n = atoi(argv[2]);
	printf("%s", ft_strchr((const char *)argv[1], n));
	return (0);
}
