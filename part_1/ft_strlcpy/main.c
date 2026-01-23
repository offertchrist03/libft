/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:59 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/19 13:54:59 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main(int argc, char **argv)
{
	char	dest[1024];
	int		n;
	int		res;

	if (argc < 3)
		return (1);
	n = atoi(argv[2]);
	res = ft_strlcpy(dest, argv[1], n);
	printf("%s\n", dest);
	printf("%d\n", res);
	return (0);
}
