/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:20:25 by jzhou             #+#    #+#             */
/*   Updated: 2021/09/12 11:24:01 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = lst;
	if (lst == NULL || f == NULL)
		return ;
	while (temp1->next != NULL)
	{
		temp2 = temp1->next;
		f(temp1->content);
		temp1 = temp2;
	}
	f(temp1->content);
}
