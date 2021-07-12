/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:08:51 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/27 11:19:46 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	int				result;
	size_t			index;

	result = 0;
	index = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (index < n)
	{
		if (cs1[index] != cs2[index])
			return (cs1[index] - cs2[index]);
		index++;
	}
	return (0);
}
