/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:45:56 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:10:50 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates (with malloc(3)) and returns a substring from the string
///			’s’. The substring begins at index ’start’ and is of maximum size
///			’len’.
/// @param s The string from which to create the substring
/// @param start The start index of the substring in the string ’s’
/// @param len The maximum length of the substring
/// @return char* The substring
/// @warning If the allocation fails, the function returns NULL.
/// @warning The substring is allocated and freed by ft_substr.
/// @warning Return value is NULL if the start and len do not denote a valid
///			substring.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	stringlen1;

	stringlen1 = (ft_strlen(s));
	if (stringlen1 <= start)
		len = 0;
	else if ((stringlen1 - start) < len)
		len = stringlen1 - start;
	newstr = (char *)ft_calloc(len + 1, 1);
	if (newstr == NULL)
		return (NULL);
	if (len > 0 && s[start])
		ft_strlcpy(newstr, &s[start], len + 1);
	return (newstr);
}
