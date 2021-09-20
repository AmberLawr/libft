/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:25:29 by jzhou             #+#    #+#             */
/*   Updated: 2021/09/12 11:32:23 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;

	newlist = 0;
	while (lst != 0)
	{
		temp = ft_lstnew(f(lst));
		if (!temp)
			del(temp);
		else
			ft_lstadd_back(&newlist, temp);
		lst = lst->next;
	}
	return (newlist);
}
