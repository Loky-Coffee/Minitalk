/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:35:29 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:50:12 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Outputs the character c to the given file descriptor
/// @param c The character to output
/// @param fd The file descriptor on which to write
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
