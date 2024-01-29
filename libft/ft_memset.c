/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:47:50 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:14:13 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Writes len bytes of value c (converted to an unsigned char) to the
///			string b.
/// @param b The string to write to
/// @param c The character to write
/// @param len The number of bytes to write
/// @return void* A pointer to the string written to
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	int				i;

	a = b;
	i = 0;
	while (len >= 1)
	{
		a[i] = c;
		i++;
		len--;
	}
	return (b);
}
