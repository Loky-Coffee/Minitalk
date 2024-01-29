/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:35:21 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:46:05 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Checks if a character is printable
/// @param c The character to check
/// @return The character if it is printable, 0 otherwise
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
