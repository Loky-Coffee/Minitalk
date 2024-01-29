/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:00:46 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:42:13 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Writes n zeroed bytes to the string s
/// @param void *s The string to write to
/// @param size_t n The number of bytes to write
void	ft_bzero(void *s, size_t n)
{
	if (n >= 1)
		ft_memset(s, 0, n);
}
