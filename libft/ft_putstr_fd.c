/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:04:32 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:50:44 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Outputs the string s to the given file descriptor
/// @param s The string to output
/// @param fd The file descriptor on which to write
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
