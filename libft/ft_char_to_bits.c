/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:19:36 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/29 01:44:41 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a character into its 8-bit binary ASCII representation.
 *
 * This function takes a single character and converts it into a string
 * representing its binary form based on the ASCII standard. The binary
 * string is composed of 8 characters ('1' or '0'), corresponding to the
 * 8 bits of the ASCII value of the input character. The result is stored
 * in the 'bits' array, which must have space for at least 9 characters
 * (8 for the binary digits and 1 for the null terminator).
 *
 * @param ch The character to be converted into binary.
 * @param bits A character array where the binary representation is stored.
 *             It should be capable of holding at least 9 characters.
 */
void	ft_char_to_bits(char ch, char *bits)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (ch & (1 << i))
			bits[7 - i] = '1';
		else
			bits[7 - i] = '0';
		--i;
	}
	bits[8] = '\0';
}
