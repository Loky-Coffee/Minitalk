/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:54:19 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:09:53 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates (with malloc(3)) and returns a copy of ’s1’ with the
///			characters specified in ’set’ removed from the beginning and the
///			end of the string.
/// @param s1 The string to be trimmed
/// @param set The reference set of characters to trim
/// @return char* The trimmed string
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*finishstr;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]) != 0)
		end--;
	finishstr = ft_substr(s1, start, end - start);
	return (finishstr);
}
