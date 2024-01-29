/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:07:39 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:16:24 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Applies the function f to each character of the string passed
///				as argument by giving its index as first argument to create
///				a new string resulting from successive applications of f.
/// @param s The string to iterate
/// @param f The function to apply to each character
/// @return char* The string created from the successive applications of f
/// @warning If s is NULL, the behavior is undefined
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*a;

	i = 0;
	if (s == NULL)
		return (NULL);
	a = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (a == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		a[i] = f(i, s[i]);
		i++;
	}
	return (a);
}
