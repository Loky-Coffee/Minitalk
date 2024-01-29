/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:56:32 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:02:44 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates sufficient memory for a copy of the string
///				s1, does the copy, and returns a pointer to it.
/// @param s1 The string to copy
/// @return char* A pointer to the copy of the string
char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	i = 0;
	new = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (new == NULL)
		return (NULL);
	while (*s1 != '\0')
		new[i++] = *s1++;
	new[i] = '\0';
	return (new);
}
