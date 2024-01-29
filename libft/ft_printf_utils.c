/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:39:41 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/29 04:55:09 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_printf(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	if (s[i] != '\0')
	{
		while (s[i] != '\0')
			i++;
		return (i);
	}
	return (0);
}

int	ft_putchar_fd_printf(int c, int fd, t_counter *data)
{
	int	j;

	j = 0;
	j = write(fd, &c, 1);
	if (j < 0)
		return (-1);
	data->counter += j;
	return (j);
}

int	ft_putstr_fd_printf(char *s, int fd, t_counter *data)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen_printf(s);
	if (s == NULL)
	{
		j = write(1, "(null)", 6);
		if (j < 0)
			return (-1);
		data->counter += j;
	}
	while (s != NULL && s[i] != '\0')
	{
		i++;
		data->counter++;
	}
	j = write(fd, s, i);
	return (j);
}

int	ft_putptr_printf(unsigned long n, int fd, t_counter *data, char *basestr)
{
	int	j;

	if (n >= ft_strlen_printf(basestr))
	{
		j = ft_putptr_printf(n / ft_strlen_printf(basestr), fd, data, basestr);
		if (j == -1)
			return (-1);
	}
	j = ft_putchar_fd_printf(basestr[n % ft_strlen_printf(basestr)], fd, data);
	return (j + 2);
}
