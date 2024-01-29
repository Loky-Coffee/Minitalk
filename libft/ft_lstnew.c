/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:08:20 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/09 02:48:17 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates (with malloc(3)) and returns a new element
/// @param content The content to create the new element with
/// @return The new element
t_list	*ft_lstnew(void *content)
{
	t_list	*root;

	root = (t_list *)malloc(sizeof(t_list));
	if (root == NULL)
		return (NULL);
	root->content = content;
	root->next = NULL;
	return (root);
}
