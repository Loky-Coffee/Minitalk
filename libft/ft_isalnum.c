/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:25:00 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:45:04 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Checks if a character is alphanumeric
/// @param int c The character to check
/// @return int The character if it is alphanumeric, 0 otherwise
int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
