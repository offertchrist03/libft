/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:47 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 13:50:00 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(int argc, char **argv)
{
	char	dest[1024];
	int		n;

	if (argc < 3)
		return (1);
	n = atoi(argv[2]);
	ft_memmove(dest, argv[1], n);
	printf("%s\n", dest);
	return (0);
}
