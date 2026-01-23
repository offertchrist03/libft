/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:12:05 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 14:08:51 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(int argc, char **argv)
{
	char	*buff;

	if (argc < 3)
		return (1);
	buff = ft_strtrim(argv[1], argv[2]);
	printf("%s", buff);
	free(buff);
	return (0);
}
