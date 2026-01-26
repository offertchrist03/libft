/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:13:41 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 12:11:39 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(int argc, char **argv)
{
	char	*buff;

	if (argc < 3)
		return (1);
	buff = ft_strjoin(argv[1], argv[2]);
	printf("%s", buff);
	printf("------%d", !strcmp((const char *)buff,
			(const char *)"tripouille42"));
	free(buff);
	return (0);
}
