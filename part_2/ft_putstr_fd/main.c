/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:32:43 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 10:34:01 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr_fd(char *s, int fd);

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	ft_putstr_fd(argv[1], atoi(argv[2]));
	return (0);
}
