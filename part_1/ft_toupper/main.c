/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:05:27 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 14:25:00 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c);

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		printf("%d:%c => %d:%c\n", argv[1][i], argv[1][i],
			ft_toupper(argv[1][i]), ft_toupper(argv[1][i]));
		i++;
	}
	return (0);
}
