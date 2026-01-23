/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:59:18 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 02:28:30 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	printf("1		:%d = %d\n", atoi("1"), ft_atoi("1"));
	printf("a1		:%d = %d\n", atoi("a1"), ft_atoi("a1"));
	printf("--1		:%d = %d\n", atoi("--1"), ft_atoi("--1"));
	printf("++1		:%d = %d\n", atoi("++1"), ft_atoi("++1"));
	printf("+1		:%d = %d\n", atoi("+1"), ft_atoi("+1"));
	printf("-1		:%d = %d\n", atoi("-1"), ft_atoi("-1"));
	printf("0		:%d = %d\n", atoi("0"), ft_atoi("0"));
	printf("+42lyon		:%d = %d\n", atoi("+42lyon"), ft_atoi("+42lyon"));
	printf("+101		:%d = %d\n", atoi("+101"), ft_atoi("+101"));
	printf("-+42		:%d = %d\n", atoi("-+42"), ft_atoi("-+42"));
	printf("+-42		:%d = %d\n", atoi("+-42"), ft_atoi("+-42"));
	printf("+		:%d = %d\n", atoi("+"), ft_atoi("+"));
	printf("-		:%d = %d\n", atoi("-"), ft_atoi("-"));
	printf("1		:%d = %d\n", atoi("1"), ft_atoi("1"));
	printf("-1		:%d = %d\n", atoi("-1"), ft_atoi("-1"));
	printf("2147483647		:%d = %d\n", atoi("2147483647"),
				ft_atoi("2147483647"));
	printf("-2147483648		:%d = %d\n", atoi("-2147483648"),
				ft_atoi("-2147483648"));
	return (0);
}
