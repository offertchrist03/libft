/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:13:41 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 13:19:51 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(int argc, char **argv)
{
	char	*buff;

	if (argc < 3)
		return (1);
	buff = ft_strjoin(argv[1], argv[2]);
	printf("%s", buff);
	free(buff);
	return (0);
}
