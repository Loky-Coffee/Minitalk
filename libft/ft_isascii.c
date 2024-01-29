/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:30:40 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:45:30 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Checks if a character is ASCII
/// @param int c The character to check
/// @return int The character if it is ASCII, 0 otherwise
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
