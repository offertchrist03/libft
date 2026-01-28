/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:59:04 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/27 17:51:40 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == 9 || nptr[i] == 10 || nptr[i] == 11
		|| nptr[i] == 12 || nptr[i] == 13 || nptr[i] == 0)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:27:20 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 17:09:51 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buffer;
	size_t			i;

	if (!s)
		return ;
	i = 0;
	buffer = (unsigned char *)s;
	while (i < n)
	{
		buffer[i] = 0;
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:15:20 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/27 17:18:44 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*buffer;
	long int		num;
	long int		s;

	num = (long int)number;
	s = (long int)size;
	if ((s < 0 && num == 0) || (s == 0 && num < 0))
		return (ft_strdup(""));
	if ((s < 0 || num < 0))
		return (NULL);
	buffer = (unsigned char *)malloc((num * s) * sizeof(unsigned char));
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, num * s);
	return ((void *)buffer);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:57:57 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:56:21 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:36:35 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:56:21 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:01:26 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 10:42:14 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(unsigned char c)
{
	int	n;

	n = c;
	if (n >= 0 && n <= 127)
	{
		return (1);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:41:43 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:57:14 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:24:34 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:57:11 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 08:33:47 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/26 15:45:54 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	do_itoa(char *buff_number, long int num, size_t i)
{
	if (num > 9)
	{
		do_itoa(buff_number, (num / 10), i - 1);
		num = num % 10;
	}
	buff_number[i] = num + '0';
}

char	*ft_itoa(int n)
{
	char		*buff_number;
	size_t		buff_len;
	long int	num;

	num = n;
	buff_len = ft_number_len(n);
	if (num < 0)
		buff_len += 1;
	buff_number = (char *)malloc((buff_len + 1) * sizeof(char));
	if (!buff_number)
		return (NULL);
	if (num < 0)
	{
		buff_number[0] = '-';
		num *= -1;
	}
	do_itoa(buff_number, num, buff_len - 1);
	buff_number[buff_len] = '\0';
	return (buff_number);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:48:11 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 10:36:20 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 09:30:29 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 10:35:41 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:14:04 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 10:35:45 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*future;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		future = current->next;
		ft_lstdelone(current, del);
		current = future;
	}
	*lst = NULL;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:52:22 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 10:35:48 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:47:06 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 10:35:55 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:44:49 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 10:35:58 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 08:39:18 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 10:36:01 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_node->content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:59:12 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/27 14:08:54 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!content)
		return (NULL);
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:17:56 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/27 13:39:51 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:02:19 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 17:16:58 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff_s;
	size_t			i;

	if (!s)
		return (NULL);
	if (c >= 256)
		c -= 256;
	i = 0;
	buff_s = (unsigned char *)s;
	while (i < n)
	{
		if (buff_s[i] == c)
			return ((void *)&buff_s[i]);
		i++;
	}
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:23:02 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 02:48:25 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buff_s1;
	unsigned char	*buff_s2;
	size_t			i;

	i = 0;
	buff_s1 = (unsigned char *)s1;
	buff_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (!(buff_s1[i] == buff_s2[i]))
			return ((int)buff_s1[i] - (int)buff_s2[i]);
		i++;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:12:57 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 09:20:14 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*buffer_dest;
	unsigned char	*buffer_src;

	buffer_dest = (unsigned char *)dest;
	buffer_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		buffer_dest[i] = buffer_src[i];
		i++;
	}
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:55:21 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 09:20:54 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer_dest;
	unsigned char	*buffer_src;
	size_t			i;

	buffer_dest = (unsigned char *)dest;
	buffer_src = (unsigned char *)src;
	if (buffer_src <= buffer_dest)
	{
		while (n > 0)
		{
			n--;
			buffer_dest[n] = buffer_src[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			buffer_dest[i] = buffer_src[i];
			i++;
		}
	}
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:29:38 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:56:21 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*buffer;
	unsigned int	i;

	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		buffer[i] = (char)c;
		i++;
	}
	return (s);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:23:06 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 11:09:10 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:38:57 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 11:14:53 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen((const char *)s))
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 11:09:20 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 11:14:11 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr_fd((num / 10), fd);
		num = num % 10;
	}
	ft_putchar_fd(num + '0', fd);
	return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:33:31 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 11:12:18 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen((const char *)s))
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:42:00 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 12:56:28 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *str, char sep)
{
	size_t	count;
	size_t	i;

	if (!str)
		return (0);
	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
			count++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (count);
}

static size_t	word_len(char const *str, char sep)
{
	size_t	i;

	if (!str)
		return (0);
	if (sep == '\0')
		return (ft_strlen(str));
	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

static char	**free_arr(char **buff_arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(buff_arr[i]);
		i++;
	}
	free(buff_arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**buff_arr;
	size_t	buff_len;
	size_t	buff_arr_i;
	size_t	temp_word_len;
	size_t	i;

	buff_len = word_count(s, c);
	buff_arr = (char **)malloc((buff_len + 1) * sizeof(char *));
	if (!buff_arr)
		return (NULL);
	buff_arr_i = 0;
	i = 0;
	while (buff_arr_i < buff_len)
	{
		while (s[i] && s[i] == c)
			i++;
		temp_word_len = word_len(&s[i], c);
		buff_arr[buff_arr_i] = ft_substr(&s[i], 0, temp_word_len);
		if (!buff_arr[buff_arr_i])
			return (free_arr(buff_arr, buff_arr_i));
		i += temp_word_len;
		buff_arr_i++;
	}
	buff_arr[buff_arr_i] = NULL;
	return (buff_arr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:31:49 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 02:54:30 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (c > 256)
		c -= 256;
	i = 0;
	while (s[i])
	{
		if ((int)s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:42:42 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 06:47:32 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:16:52 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/24 11:27:11 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		(f)(i, &s[i]);
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:03:59 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 09:21:54 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	str_len1;
	size_t	str_len2;

	if (!s1 || !s2)
		return (NULL);
	str_len1 = ft_strlen(s1);
	str_len2 = ft_strlen(s2);
	buffer = malloc((str_len1 + str_len2 + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	buffer[0] = '\0';
	ft_strlcat(buffer, s1, str_len1 + str_len2 + 1);
	ft_strlcat(buffer, s2, str_len1 + str_len2 + 1);
	return (buffer);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:21 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/26 08:30:52 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:54:24 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 03:21:13 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (size <= 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:28:49 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 17:09:33 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 09:33:45 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/26 15:47:21 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*buffer;

	buffer = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		buffer[i] = (f)(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:31:19 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/28 09:17:27 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && !(!s1[i] && !s2[i]))
	{
		if ((int)s1[i] != (int)s2[i])
			return ((int)s1[i] - (int)s2[i]);
		i++;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:26:41 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 02:21:35 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (little[i] == '\0' || !little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (j < ft_strlen(little))
			{
				if (big[i + j] == little[j] && (i + j) < len)
					j++;
				else
					break ;
			}
			if (j == ft_strlen(little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:38:02 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/23 02:56:12 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (c > 256)
		c -= 256;
	s_len = 0;
	while (s[s_len])
		s_len++;
	while (s_len > 0)
	{
		s_len--;
		if ((int)s[s_len] == c)
			return ((char *)&s[s_len]);
	}
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:31:30 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/26 13:06:01 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	index_start(char const *str, char const *set)
{
	size_t	i;

	i = 0;
	while (str[i] && in_set(str[i], set))
		i++;
	return (i);
}

static size_t	index_end(char const *str, char const *set)
{
	size_t	len;

	len = ft_strlen(str);
	if (len == 0)
		return (0);
	len--;
	while (len > 0 && in_set(str[len], set))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	start = index_start(s1, set);
	end = index_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	trimed = (char *)malloc((end - start + 2) * sizeof(char));
	if (!trimed)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		trimed[i] = s1[start];
		i++;
		start++;
	}
	trimed[i] = '\0';
	return (trimed);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:51:56 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/27 10:29:31 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	i;
	size_t	buffer_len;

	if (!s)
		return (NULL);
	buffer_len = ft_strlen(s);
	if (start >= buffer_len)
		return (ft_strdup(""));
	if (len > buffer_len - start)
		len = buffer_len - start;
	buffer = (char *)malloc((len + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:25:56 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:56:21 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahendri <mahendri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:21:53 by mahendri          #+#    #+#             */
/*   Updated: 2026/01/22 22:56:21 by mahendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
