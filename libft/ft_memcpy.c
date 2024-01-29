/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:40:02 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:49:34 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Copies n bytes from memory area src to memory area dst
/// @param dst The destination memory area
/// @param src The source memory area
/// @param n The number of bytes to copy
/// @return void* A pointer to the destination memory area
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (src1 == 0 && dst1 == 0)
		return (0);
	while (n >= 1)
	{
		*dst1++ = *src1++;
		n--;
	}
	return (dst);
}
