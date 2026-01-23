/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:01:11 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/19 10:58:37 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(unsigned char c);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	if (ft_isalnum(argv[1][0]))
		printf("ok!");
	else
		printf(":(");
	return (0);
}
