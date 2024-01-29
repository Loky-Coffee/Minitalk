/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 03:15:06 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:17:37 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intcount(int n)
{
	int	i;

	i = 1;
	n /= 10;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/// @brief Converts an int to a string
/// @param n The int to convert
/// @return char* The converted int
char	*ft_itoa(int n)
{
	char	*string;
	int		inti;
	int		i;
	int		n1;

	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	n1 = n;
	inti = intcount(n);
	if (n < 0)
		inti++;
	if (n < 0)
		n = n * -1;
	string = (char *)ft_calloc(inti + 1, sizeof(char));
	if (string == NULL)
		return (NULL);
	i = inti - 1;
	while (inti-- > 0)
	{
		string[i--] = (n % 10) + 48;
		n = n / 10;
	}
	if (n1 < 0)
		string[0] = '-';
	return (string);
}
