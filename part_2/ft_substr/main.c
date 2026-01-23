/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:51:34 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 13:01:20 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(int argc, char **argv)
{
	char	*buff;

	if (argc < 4)
		return (1);
	buff = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
	printf("%s", buff);
	free(buff);
	return (0);
}
