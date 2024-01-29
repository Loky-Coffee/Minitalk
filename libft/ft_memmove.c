/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:03:59 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:49:47 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Copies len bytes from string src to string dst
/// @param dst The destination string
/// @param src The source string
/// @param len The number of bytes to copy
/// @return void* A pointer to the destination string
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (src1 == 0 && dst1 == 0)
		return (0);
	if (dst1 <= src1)
	{
		while (len-- > 0)
			*dst1++ = *src1++;
	}
	else if (dst1 > src1)
	{
		dst1 += len -1;
		src1 += len -1;
		while (len-- > 0)
			*dst1-- = *src1--;
	}
	return (dst);
}
