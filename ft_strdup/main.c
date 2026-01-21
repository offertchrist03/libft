/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:41:59 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 09:49:14 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *str);

int	main(int argc, char **argv)
{
	char	*copied_str;

	if (argc < 2)
		return (1);
	copied_str = ft_strdup(argv[1]);
	printf("%s", copied_str);
	free(copied_str);
	return (0);
}
