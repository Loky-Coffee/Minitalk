/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:42:36 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:07:13 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Computes the length of the string s
/// @param s The string to compute the length of
/// @return size_t The length of the string
/// @warning If s is NULL, the behavior is undefined
size_t	ft_strlen(const char *s)
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
