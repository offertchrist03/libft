/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:47 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 16:41:25 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(int argc, char **argv)
{
	char	*src;
	char	*dest1;

	// char	dest1[27] = "Hello";
	(void)argc;
	src = argv[1];
	dest1 = src + 2;
	memmove(dest1, src, 3);
	// memcpy(dest2, src, 8);
	printf("%s\n", dest1);
}
