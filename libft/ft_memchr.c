/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:42 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:13:47 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Locates the first occurrence of c (converted to an unsigned char) in
///		the string pointed to by s. The search stops at the first null
///		terminator or after n bytes have been searched, whichever comes first
/// @param s The string to search
/// @param c The character to search for
/// @param n The number of bytes to search
/// @return void* A pointer to the byte located, or NULL if no such byte exists
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*a;
	size_t			i;

	i = 0;
	a = s;
	while (i < n)
	{
		if (a[i] == (char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
