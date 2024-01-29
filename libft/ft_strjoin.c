/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:35:36 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:15:42 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates (with malloc(3)) and returns a new string, which is the
///			result of the concatenation of ’s1’ and ’s2’. If the allocation
///			fails the function returns NULL.
/// @param s1 The prefix string
/// @param s2 The suffix string
/// @return char* The new string
/// @note NULL if the allocation fails
/// @warning The “fresh” string result of the concatenation of the 2 strings
///			s1 and s2. If the allocation fails the function returns NULL.
/// @warning The behavior is undefined if the strings to not overlap, as the
///			behavior of ft_strlcat is undefined.
/// @warning Don't forget to free the string with free(3)
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	maxlen;

	maxlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = ft_calloc(maxlen, 1);
	if (!newstr)
		return (NULL);
	ft_strlcat(newstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(newstr, s2, maxlen);
	return (newstr);
}
