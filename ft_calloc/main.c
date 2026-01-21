/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:15:30 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/21 09:40:37 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t number, size_t size);

int	main(int argc, char **argv)
{
	char	*ptr;
	size_t	number;

	if (argc < 3)
		return (1);
	number = atoi(argv[2]);
	ptr = ft_calloc(number, sizeof(char));
	while (number > 0)
	{
		number--;
		ptr[number] = argv[1][number];
	}
	printf("%s", ptr);
	free(ptr);
	return (0);
}
