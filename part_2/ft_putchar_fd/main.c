/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:22:54 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 10:25:07 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	ft_putchar_fd(argv[1][0], atoi(argv[2]));
	return (0);
}
