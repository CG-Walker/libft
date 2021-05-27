/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:37:19 by cgoncalv          #+#    #+#             */
/*   Updated: 2021/05/27 18:36:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *lst)
{
	size_t i;

	i = 0;
	if (lst == NULL)
		return (i);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
