/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bits_to_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:26:20 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/29 01:45:06 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a binary string to its corresponding ASCII character.
 *
 * This function takes a string of binary digits ('1' and '0') and converts
 * it back to the character it represents. The binary string should represent
 * the ASCII value of a character in binary form. The function parses each
 * binary digit, converting it from a binary representation to a decimal value,
 * which corresponds to the ASCII code of a character. The function assumes
 * that the input string is a valid binary representation and is null-terminated.
 *
 * @param bits A null-terminated string containing the binary representation
 *             of an ASCII character. It is assumed to be in the correct format.
 *
 * @return The ASCII character corresponding to the binary input.
 */
char	ft_bits_to_char(char *bits)
{
	char	result;
	int		i;

	i = 0;
	result = 0;
	while (bits[i] != '\0')
	{
		result *= 2;
		if (bits[i] == '1')
			result += 1;
		++i;
	}
	return (result);
}
