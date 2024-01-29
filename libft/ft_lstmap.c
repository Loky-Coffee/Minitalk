/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 04:10:08 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 03:13:24 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Iterates the list lst and applies the function f to the content of
/// each element. Creates a new list resulting of the successive applications
/// of the function f. The del function is used to delete the content of an
/// element if needed.
/// @param lst The address of a pointer to an element
/// @param f The address of the function used to iterate on the list
/// @param del The address of the function used to delete the content of an
/// @return The new list
/// @warning If the allocation fails, the function returns NULL
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*newcon;

	newlist = NULL;
	while (lst != NULL)
	{
		newcon = f(lst->content);
		newnode = ft_lstnew(newcon);
		if (newnode == NULL)
		{
			ft_lstclear(&newlist, del);
			del(newcon);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
