/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:41 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 14:30:29 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(int argc, char **argv)
{
	char	*src;
	char	*dest1;

	// char	dest1[27] = "Hello";
	(void)argc;
	src = argv[1];
	dest1 = src + 2;
	ft_memcpy(dest1, src, 8);
	// memcpy(dest2, src, 8);
	printf("%s\n", dest1);
}
