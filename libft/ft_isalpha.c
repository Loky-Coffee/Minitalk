/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:20:40 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:45:16 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Checks if a character is alphabetic
/// @param int c The character to check
/// @return int The character if it is alphabetic, 0 otherwise
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
