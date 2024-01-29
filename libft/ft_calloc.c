/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:53:27 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:43:57 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/// @brief Allocates memory for an array of nmemb elements of size bytes
///			each and returns a pointer to the allocated memory.
/// @param count The number of elements
/// @param size The size of each element
/// @return void* A pointer to the allocated memory
void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	char		*str;

	i = 0;
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	str = (char *)malloc(count * size);
	if (str == NULL)
		return (NULL);
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
