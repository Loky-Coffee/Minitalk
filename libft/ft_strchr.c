/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:26:44 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:15:23 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Locates the first occurrence of c (converted to a char) in the
///		string pointed to by s. The search stops at the first null terminator.
/// @param s The string to search
/// @param c The character to search for
/// @return char* A pointer to the located character, or NULL if the character
///		does not appear in the string
/// @warning The terminating null character is considered to be part of the
///		string; therefore if c is `\0', the functions locate the terminating
///		`\0'.
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
