/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 08:33:47 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 09:30:45 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strdup(const char *str)
{
	char	*buffer;
	int		i;

	if (!str)
		return (NULL);
	buffer = (char *)malloc(ft_strlen(str) + 1 * sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = ' ';
	buffer[i++] = '\0';
	return (buffer);
}

static char	*ft_strrev(char *str)
{
	char	*str_temp;
	int		i;
	int		j;

	str_temp = ft_strdup(str);
	i = ft_strlen((const char *)str_temp);
	j = 0;
	while ((size_t)j < ft_strlen((const char *)str_temp))
	{
		i--;
		str[i] = str_temp[j];
		j++;
	}
	free(str_temp);
	return (str);
}

static size_t	ft_number_len(int n)
{
	size_t		count;
	long int	num;

	num = n;
	if (num < 0)
		num *= -1;
	count = 0;
	while (num > 9)
	{
		num = num / 10;
		count++;
	}
	count++;
	return (count);
}

static char	*do_itoa(char *buff, int n, int size)
{
	long int	num;
	int			i;

	i = 0;
	num = n;
	if (num < 0)
		num *= -1;
	while (i < size)
	{
		buff[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	buff[i] = '\0';
	buff = ft_strrev(buff);
	return (buff);
}

char	*ft_itoa(int n)
{
	char	*buff_number;
	int		buff_len;

	buff_len = ft_number_len(n);
	if (n < 0)
		buff_len++;
	buff_number = (char *)malloc(buff_len * sizeof(char));
	if (!buff_number)
	{
		free(buff_number);
		return (NULL);
	}
	buff_number = do_itoa(buff_number, n, buff_len);
	if (n < 0)
		buff_number[0] = '-';
	return (buff_number);
}
