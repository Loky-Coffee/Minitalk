/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:27:28 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:47:17 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Deletes and frees the given element and every successor of
///				that element, using the function del and free(3)
/// @param lst The address of a pointer to an element
/// @param del The address of the function used to delete the
///					content of the element
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*hier;
	t_list	*next;

	hier = *lst;
	while (hier != NULL)
	{
		next = hier->next;
		del(hier->content);
		free(hier);
		hier = next;
	}
	*lst = NULL;
}
