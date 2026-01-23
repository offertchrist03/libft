/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:57:10 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/20 15:11:37 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int	main(int argc, char **argv)
{
	int	n;

	if (argc < 3)
		return (1);
	n = atoi(argv[2]);
	printf("%s", ft_strrchr((const char *)argv[1], n));
	return (0);
}
