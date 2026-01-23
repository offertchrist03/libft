/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:55 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 04:06:42 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(int argc, char **argv)
{
	char	dest[1024] = "coucou";
	int		n;
	int		res;

	if (argc < 3)
		return (1);
	n = atoi(argv[2]);
	res = ft_strlcat(dest, argv[1], n);
	printf("dest: %s\n", dest);
	printf("res: %d\n", res);
	return (0);
}
