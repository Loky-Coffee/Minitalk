/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:04:15 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:01:18 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wortcounter(char const *s, char c)
{
	int	i;
	int	strcounter;

	i = 0;
	strcounter = 0;
	if (!s || s[0] == 0)
		return (0);
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			strcounter++;
		i++;
	}
	if (i > 0 && s[i - 1] != c)
		strcounter++;
	if (s[0] == '\0')
		strcounter = 0;
	return (strcounter);
}

static int	mallocfree(char	**newarray, int i)
{
	while (i > 0)
	{
		free(newarray[i - 1]);
		i--;
	}
	free (newarray);
	return (0);
}

static int	stringmake(int wortcount, char const *s, char c, char	**newarray)
{
	int	i;
	int	a;
	int	j;
	int	charcount;

	i = 0;
	j = 0;
	while (i < wortcount)
	{
		charcount = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j + charcount] != c && s[j + charcount] != '\0')
			charcount++;
		newarray[i] = (char *)ft_calloc(charcount + 1, (sizeof(char)));
		if (newarray[i] == NULL)
			return (mallocfree(newarray, i));
		a = 0;
		while (charcount > a && s[j])
			newarray[i][a++] = s[j++];
		i++;
	}
	return (1);
}

/**
 * @brief Splits a string into an array of strings using a delimiter.\n
 * The array of strings is terminated by a NULL pointer.\n
 * If the allocation fails, the function returns NULL.\n
 * If the string is empty, the function returns NULL.\n
 * If the allocation fails,function free the previously alloc strings.\n
 * DONT FORGET TO FREE THE RETURNED STRING ARRAY WITH FT_FREE_SPLIT!!!.
 * @param s The string to split
 * @param c The delimiter
 * @return char** The array of strings
 */
char	**ft_split(char const *s, char c)
{
	int		wortcount;
	char	**newarray;

	if (s == NULL)
		return (NULL);
	wortcount = wortcounter(s, c);
	newarray = (char **)ft_calloc(wortcount + 1, sizeof(char *));
	if (!newarray)
		return (NULL);
	if (stringmake(wortcount, s, c, newarray) == 0)
	{
		free(newarray);
		return (NULL);
	}
	return (newarray);
}
