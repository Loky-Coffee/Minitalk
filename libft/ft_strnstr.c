/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:18:05 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:17:21 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Locates the first occurrence of the null-terminated string needle in
///		the string haystack, where not more than len characters are searched.
/// @param haystack The string to search
/// @param needle The string to search for
/// @param len The maximum number of characters to search
/// @return char* A pointer to the located character, or NULL if the character
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	while ((*haystack && len >= i) || (i == 0))
	{
		if ((ft_strncmp(haystack, needle, i) == 0) || (i == 0))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
