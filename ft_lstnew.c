/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:37:08 by ilnassi           #+#    #+#             */
/*   Updated: 2025/03/09 16:45:06 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*put_node;

	put_node = (t_list *)malloc(sizeof(t_list));
	if (put_node == NULL)
		return (NULL);
	put_node->content = content;
	put_node->next = NULL;
	return (put_node);
}
