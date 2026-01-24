/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:51:34 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 10:52:44 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd);

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
