/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:51 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/19 13:54:52 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, unsigned int n);

int	main(int argc, char **argv)
{
	char			*s;
	char			c;
	unsigned int	n;

	if (argc < 4)
		return (1);
	s = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("*ft_memset((%s), (%d), (%d));", s, c, n);
	ft_memset(s, c, n);
	printf("\n=> %s", s);
	return (0);
}
