/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 06:35:36 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:44:16 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Prints an error message to STDERR and exits the program
/// @param str The error message to print
/// @param exit_code The exit code to exit the program with
void	ft_error(char *str, int exit_code)
{
	ft_putstr_fd(str, STDERR_FILENO);
	exit(exit_code);
}
