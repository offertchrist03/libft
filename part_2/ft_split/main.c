/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:38:13 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 08:30:14 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);
size_t	count_part(char const *s, char c);
void	free_arr(char **arr, size_t size);

int	main(int argc, char **argv)
{
	char	**buffer_array;
	size_t	i;

	if (argc < 3)
		return (1);
	// buffer_array = ft_split(argv[1], argv[2][0]);
	// printf("part= %zu\n", count_part(argv[1], argv[2][0]));
	buffer_array = ft_split(argv[1], argv[2][0]);
	i = 0;
	while (i < count_part(argv[1], argv[2][0]))
	{
		printf("%s\n", buffer_array[i]);
		i++;
	}
	free_arr(buffer_array, count_part(argv[1], argv[2][0]));
	return (0);
}
