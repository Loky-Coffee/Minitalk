/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:44:45 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:06:48 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Copies up to dstsize - 1 characters from the string src to dst,
///			NUL-terminating the result if dstsize is not 0.
/// @param dst The string to copy to
/// @param src The string to copy from
/// @param dstsize The size of the destination buffer
/// @return size_t The total length of the string they tried to create
/// @warning If dstsize is 0, the string is not copied and the function
///				returns the length of src.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstsize = dstsize -1;
	if (dstsize != 0)
	{
		while (dstsize != 0 && *src != '\0')
		{
			*dst++ = *src++;
			dstsize--;
		}
		*dst = '\0';
		return (srclen);
	}
	*dst = '\0';
	return (srclen);
}
