/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:54:59 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/19 10:24:57 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	if (ft_isalpha(argv[1][0]))
		printf("ok!");
	else
		printf(":(");
	return (0);
}
