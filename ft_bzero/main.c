/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:55:50 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/19 13:55:51 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	printf("%s\n", argv[1]);
	ft_bzero(argv[1], atoi(argv[2]));
	printf("%s\n", argv[1]);
	printf("%s\n", &((argv[1])[atoi(argv[2])]));
	return (0);
}
