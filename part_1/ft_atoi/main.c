/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:59:18 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 09:02:08 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("atoi	: %s => %d\n", argv[1], atoi(argv[1]));
	printf("ft_atoi	: %s => %d\n", argv[1], ft_atoi(argv[1]));
	return (0);
}
