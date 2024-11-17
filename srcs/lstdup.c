/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:53:02 by marvin            #+#    #+#             */
/*   Updated: 2024/11/16 19:53:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst, void (*del)(void*))
{
	t_list	*new_lst;
	t_list	*temp;
	t_list	*new_elem;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	temp = lst;
	while (temp != NULL)
	{
		new_elem = ft_lstnew(temp->content);
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		temp = temp->next;
	}
	return (new_lst);
}

/*
static void	ft_lstiter_return(t_list *lst, void *(*f)(void *))
{
	void	*a;
	t_list	*elem;

	if (!lst)
		return ;
	elem = lst;
	while (elem)
	{
		a = f(elem->content);
		elem->content = a;
		elem = elem->next;
	}
}
*/
