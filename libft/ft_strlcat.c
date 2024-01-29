/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:31:51 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:15:59 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Appends the NUL-terminated string src to the end of dst.
/// @param dst The string to append to
/// @param src The string to append
/// @param dstsize The size of the destination buffer
/// @return size_t The total length of the string they tried to create
/// @warning If dstsize is 0, the string is not copied and the function
///				returns the length of src.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	dstfull;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	dstfull = dstlen + srclen;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (dstlen < dstsize - 1 && *src)
	{
		dst[dstlen] = *src++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (dstfull);
}
