/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 08:33:38 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 08:59:34 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(int argc, char **argv)
{
	char	*buff;

	if (argc < 2)
		return (1);
	buff = ft_itoa(atoi(argv[1]));
	printf("%d => %s", atoi(argv[1]), buff);
	free(buff);
	return (0);
}
