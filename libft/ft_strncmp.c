/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:42:35 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:16:42 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Compares the two strings s1 and s2 up to n characters or until a '\0'
/// is reached. If the two strings are identical, returns 0. Otherwise, returns
/// the difference between the first two differing bytes (treated as unsigned
/// char values, so that '\200' is greater than '\0', for example). Zero-length
/// strings are always identical. This behavior is not required by C and
/// portable code should only depend on the sign of the returned value.
/// @param s1 The first string to compare
/// @param s2 The second string to compare
/// @param n The maximum number of characters to compare
/// @return int The difference between the first two differing bytes
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > i && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
